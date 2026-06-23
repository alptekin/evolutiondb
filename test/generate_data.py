#!/usr/bin/env python3
"""generate_data.py — 8 sharded tables, ~1.84M records, FK-linked"""

import sys, os, time, random
sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query

random.seed(42)
BATCH = 25

# ── Record counts ──
N_MUSTERI      = 400_000
N_ADRES        = 400_000
N_STOK         = 10_000
N_STOK_DETAY   = 10_000
N_FATURA       = 200_000
N_FIS          = 600_000
N_MUHASEBE     = 200_000
N_SARF         = 20_000

# ── Sample data pools (all ≤10 chars) ──
ADLAR = ['Ali','Ayse','Mehmet','Fatma','Ahmet','Zeynep','Murat','Emine',
         'Hasan','Hulya','Burak','Selin','Emre','Deniz','Cem','Elif',
         'Can','Esra','Onur','Pinar','Baris','Merve','Tolga','Defne']
SOYADLAR = ['Yilmaz','Kaya','Demir','Celik','Sahin','Yildiz','Ozturk',
            'Aydin','Koc','Arslan','Aksoy','Korkmaz','Dogan','Kilic']
ILLER = ['Istanbul','Ankara','Izmir','Bursa','Antalya','Adana','Konya',
         'Samsun','Mersin','Kocaeli','Eskisehir','Trabzon','Denizli','Malatya']
ILCELER = ['Merkez','Kadikoy','Cankaya','Bornova','Nilufer','Seyhan',
           'Selcuklu','Atakum','Akdeniz','Izmit','Odunpzri','Ortahisr']
MAHALLE = ['Yeni Mah','Ataturk','Cumhriyet','Fatih Mah','Mevlana','Zafer Mah',
           'Gazi Mah','Kultur','Huzur Mah','Baris Mah']
SOKAK = ['1. Sokak','2. Sokak','3. Cadde','4. Cadde','5. Sokak',
         'Ana Cadde','Park Sok','Lale Sok','Gul Cadde','Cicek Sok']
MESLEK = ['Muhendis','Doktor','Ogretmen','Avukat','Memur','Esnaf',
          'Isci','Ogrenci','Emekli','Serbest','Mimar','Eczaci']
EGITIM = ['Ilkokul','Ortaokul','Lise','Onlisans','Lisans','YukLisans','Doktora']
MEDENI = ['Bekar','Evli','Bosanmis','Dul']
KAN = ['A+','A-','B+','B-','AB+','AB-','0+','0-']
SEGMENT = ['Bronz','Gumus','Altin','Platin','Elmas']
SEVIYE = ['Dusuk','Orta','Yuksek','VIP']
DURUM_A = ['aktif','pasif']
CINSIYET = ['E','K']
KATEGORI = ['Elektrnk','Gida','Tekstil','Mobilya','Kozmetik',
            'Kitap','Oyuncak','Spor','Bahce','Oto']
BIRIM = ['adet','kg','lt','mt','paket','kutu','koli','ton','m2','m3']
MARKA = ['MarkaA','MarkaB','MarkaC','MarkaD','MarkaE','MarkaF','MarkaG','MarkaH']
DEPO = ['Depo1','Depo2','Depo3','Depo4','Depo5']
ODEME = ['Nakit','KrediKrt','Havale','EFT','Cek','Senet']
HESAP = ['100','101','102','120','153','255','320','335','391','600']
RENK = ['Kirmizi','Mavi','Yesil','Siyah','Beyaz','Gri','Sari','Turuncu']
MALZEME = ['Metal','Plastik','Ahsap','Cam','Kumas','Deri','Kagit','Seramik']
MENSEI = ['Turkiye','Cin','Almanya','Italya','ABD','Japonya','Kore','Hindistan']
AMBALAJ = ['Karton','Naylon','Cam','Teneke','Vakum','Strec','Ahsap','Buble']
KALITE = ['A','B','C','A+','B+']
REF = ['web','magaza','sosyal','reklam','arkadas','diger']
FATURA_TIP = ['satis','iade','profrma']
KARGO = ['Yurtici','Aras','MNG','PTT','Surat','UPS']

def rc(lst): return random.choice(lst)
def ri(a, b): return random.randint(a, b)
def rdate(y1=2020, y2=2025): return f"{ri(y1,y2)}-{ri(1,12):02d}-{ri(1,28):02d}"

def esc(v):
    """Escape single quotes for SQL"""
    if isinstance(v, int):
        return str(v)
    return "'" + str(v).replace("'", "''") + "'"

def batch_insert(s, table, cols, rows):
    """Multi-row INSERT in one statement"""
    hdr = f"INSERT INTO {table} ({', '.join(cols)}) VALUES "
    vals = []
    for row in rows:
        vals.append("(" + ", ".join(esc(v) for v in row) + ")")
    sql = hdr + ", ".join(vals)
    _, _, err, _ = simple_query(s, sql)
    if err:
        print(f"\n  ERROR [{table}]: {err[:120]}")
        return False
    return True

def progress(name, done, total, t0):
    elapsed = time.time() - t0
    pct = done * 100 / total
    rate = done / elapsed if elapsed > 0 else 0
    eta = (total - done) / rate if rate > 0 else 0
    print(f"\r  {name}: {done:,}/{total:,} ({pct:.0f}%) — {rate:.0f} rows/s, ETA {eta:.0f}s   ", end="", flush=True)

# ══════════════════════════════════════════════════
#  DDL
# ══════════════════════════════════════════════════
DDL_DROP = [
    "DROP TABLE IF EXISTS fis",
    "DROP TABLE IF EXISTS muhasebe",
    "DROP TABLE IF EXISTS sarf_malzeme",
    "DROP TABLE IF EXISTS fatura",
    "DROP TABLE IF EXISTS stok_detay",
    "DROP TABLE IF EXISTS adres",
    "DROP TABLE IF EXISTS musteri",
    "DROP TABLE IF EXISTS stok",
]

DDL_CREATE = [
    # 1. musteri — ana tablo (400K)
    """CREATE TABLE musteri (
        id BIGINT PRIMARY KEY DEFAULT snowflake_id(),
        ad VARCHAR(10), soyad VARCHAR(10), email VARCHAR(10), tel VARCHAR(10),
        tc_no VARCHAR(10), dogum_tar VARCHAR(10), cinsiyet VARCHAR(10),
        meslek VARCHAR(10), egitim VARCHAR(10), medeni VARCHAR(10),
        kan_grubu VARCHAR(10), uyruk VARCHAR(10), segment VARCHAR(10),
        puan INTEGER, seviye VARCHAR(10), kayit_tar VARCHAR(10),
        durum VARCHAR(10), referans VARCHAR(10), not_alan VARCHAR(10)
    )""",

    # 2. stok — ürün kataloğu (10K)
    """CREATE TABLE stok (
        id BIGINT PRIMARY KEY DEFAULT snowflake_id(),
        kod VARCHAR(10), ad VARCHAR(10), barkod VARCHAR(10), kategori VARCHAR(10),
        birim VARCHAR(10), marka VARCHAR(10), model VARCHAR(10),
        alis_fiyat INTEGER, satis_fiya INTEGER, kdv_oran INTEGER,
        min_stok INTEGER, max_stok INTEGER, mevcut INTEGER,
        raf VARCHAR(10), depo VARCHAR(10), durum VARCHAR(10),
        kayit_tar VARCHAR(10), guncelleme VARCHAR(10), aciklama VARCHAR(10)
    )""",

    # 3. adres — müşteri adresleri (400K, FK → musteri)
    """CREATE TABLE adres (
        id BIGINT PRIMARY KEY DEFAULT snowflake_id(),
        musteri_id BIGINT, il VARCHAR(10), ilce VARCHAR(10),
        mahalle VARCHAR(10), sokak VARCHAR(10), bina_no VARCHAR(10),
        daire_no VARCHAR(10), posta_kod VARCHAR(10), ulke VARCHAR(10),
        bolge VARCHAR(10), adres_tip VARCHAR(10), enlem VARCHAR(10),
        boylam VARCHAR(10), aciklama VARCHAR(10), varsayilan VARCHAR(10),
        durum VARCHAR(10), kayit_tar VARCHAR(10), guncelleme VARCHAR(10),
        sil_tar VARCHAR(10),
        FOREIGN KEY (musteri_id) REFERENCES musteri(id)
    )""",

    # 4. stok_detay — ürün detayları (10K, FK → stok)
    """CREATE TABLE stok_detay (
        id BIGINT PRIMARY KEY DEFAULT snowflake_id(),
        stok_id BIGINT, agirlik VARCHAR(10), hacim VARCHAR(10),
        renk VARCHAR(10), beden VARCHAR(10), malzeme VARCHAR(10),
        mensei VARCHAR(10), garanti VARCHAR(10), uretim_tar VARCHAR(10),
        son_kull VARCHAR(10), parti_no VARCHAR(10), seri_no VARCHAR(10),
        lot_no VARCHAR(10), kalite VARCHAR(10), tedarikci VARCHAR(10),
        raf_omru VARCHAR(10), ambalaj VARCHAR(10), etiket VARCHAR(10),
        ozellik VARCHAR(10),
        FOREIGN KEY (stok_id) REFERENCES stok(id)
    )""",

    # 5. fatura — satış faturaları (200K, FK → musteri, adres)
    """CREATE TABLE fatura (
        id BIGINT PRIMARY KEY DEFAULT snowflake_id(),
        musteri_id BIGINT, fatura_no VARCHAR(10), tarih VARCHAR(10),
        vade_tar VARCHAR(10), tip VARCHAR(10), durum VARCHAR(10),
        toplam INTEGER, kdv INTEGER, indirim INTEGER, net INTEGER,
        odeme_tip VARCHAR(10), aciklama VARCHAR(10), adres_id BIGINT,
        kargo VARCHAR(10), kargo_tak VARCHAR(10), onay_tar VARCHAR(10),
        iptal_tar VARCHAR(10), iade_tar VARCHAR(10), kayit_tar VARCHAR(10),
        FOREIGN KEY (musteri_id) REFERENCES musteri(id),
        FOREIGN KEY (adres_id) REFERENCES adres(id)
    )""",

    # 6. fis — fatura kalemleri (600K, FK → fatura, stok)
    """CREATE TABLE fis (
        id BIGINT PRIMARY KEY DEFAULT snowflake_id(),
        fatura_id BIGINT, stok_id BIGINT, miktar INTEGER,
        birim_fiy INTEGER, toplam INTEGER, kdv_oran INTEGER,
        kdv_tutar INTEGER, indirim INTEGER, net INTEGER,
        iskonto VARCHAR(10), kampanya VARCHAR(10), aciklama VARCHAR(10),
        sira_no INTEGER, birim VARCHAR(10), depo VARCHAR(10),
        parti_no VARCHAR(10), seri_no VARCHAR(10), durum VARCHAR(10),
        kayit_tar VARCHAR(10),
        FOREIGN KEY (fatura_id) REFERENCES fatura(id),
        FOREIGN KEY (stok_id) REFERENCES stok(id)
    )""",

    # 7. muhasebe — muhasebe kayıtları (200K, FK → fatura)
    """CREATE TABLE muhasebe (
        id BIGINT PRIMARY KEY DEFAULT snowflake_id(),
        fatura_id BIGINT, hesap_kod VARCHAR(10), tarih VARCHAR(10),
        borc INTEGER, alacak INTEGER, aciklama VARCHAR(10),
        belge_no VARCHAR(10), belge_tip VARCHAR(10), donem VARCHAR(10),
        kaynak VARCHAR(10), para_bir VARCHAR(10), kur INTEGER,
        tutar INTEGER, durum VARCHAR(10), onay VARCHAR(10),
        onay_tar VARCHAR(10), kayit_tar VARCHAR(10), guncelleme VARCHAR(10),
        kullanici VARCHAR(10),
        FOREIGN KEY (fatura_id) REFERENCES fatura(id)
    )""",

    # 8. sarf_malzeme — sarf malzemeler (20K, FK → stok)
    """CREATE TABLE sarf_malzeme (
        id BIGINT PRIMARY KEY DEFAULT snowflake_id(),
        stok_id BIGINT, ad VARCHAR(10), kod VARCHAR(10),
        miktar INTEGER, birim VARCHAR(10), min_miktar INTEGER,
        depo VARCHAR(10), raf VARCHAR(10), tedarikci VARCHAR(10),
        son_alis VARCHAR(10), fiyat INTEGER, kdv_oran INTEGER,
        kategori VARCHAR(10), durum VARCHAR(10), aciklama VARCHAR(10),
        marka VARCHAR(10), model VARCHAR(10), kayit_tar VARCHAR(10),
        guncelleme VARCHAR(10),
        FOREIGN KEY (stok_id) REFERENCES stok(id)
    )""",
]

# ══════════════════════════════════════════════════
#  Data generators
# ══════════════════════════════════════════════════
MUSTERI_COLS = ['id','ad','soyad','email','tel','tc_no','dogum_tar','cinsiyet',
                'meslek','egitim','medeni','kan_grubu','uyruk','segment',
                'puan','seviye','kayit_tar','durum','referans','not_alan']

def gen_musteri_row(i):
    ad = rc(ADLAR)
    return [i, ad, rc(SOYADLAR), f"{ad[:3]}{i%999}@x"[:10], f"55{ri(10000000,99999999)}",
            f"{ri(1000000000,9999999999)}"[:10], rdate(1960,2005), rc(CINSIYET),
            rc(MESLEK), rc(EGITIM), rc(MEDENI), rc(KAN), 'TC', rc(SEGMENT),
            ri(0,100), rc(SEVIYE), rdate(2020,2025), rc(DURUM_A), rc(REF),
            f"n{ri(1,99999)}"[:10]]

ADRES_COLS = ['id','musteri_id','il','ilce','mahalle','sokak','bina_no','daire_no',
              'posta_kod','ulke','bolge','adres_tip','enlem','boylam','aciklama',
              'varsayilan','durum','kayit_tar','guncelleme','sil_tar']

def gen_adres_row(i):
    return [i, i, rc(ILLER), rc(ILCELER), rc(MAHALLE), rc(SOKAK),
            str(ri(1,200)), str(ri(1,30)), f"{ri(10000,99999)}", 'Turkiye',
            rc(['Marmara','Ege','Akdeniz','IcAnadolu','Karadeniz','DAnadolu','GADogu']),
            rc(['Ev','Is','Fatura']), f"{ri(36,42)}.{ri(1,99)}"[:10],
            f"{ri(26,45)}.{ri(1,99)}"[:10], rc(['Ana adres','Ek adres','Teslim']),
            rc(['evet','hayir']), 'aktif', rdate(), rdate(), '-']

STOK_COLS = ['id','kod','ad','barkod','kategori','birim','marka','model',
             'alis_fiyat','satis_fiya','kdv_oran','min_stok','max_stok','mevcut',
             'raf','depo','durum','kayit_tar','guncelleme','aciklama']

def gen_stok_row(i):
    alis = ri(10,5000)
    return [i, f"STK{i:06d}"[:10], f"Urun{i:05d}"[:10], f"869{ri(1000000,9999999)}"[:10],
            rc(KATEGORI), rc(BIRIM), rc(MARKA), f"MDL{ri(1,999)}"[:10],
            alis, int(alis*1.3), rc([1,8,18,20]), ri(5,50), ri(100,1000), ri(0,500),
            f"R{ri(1,50):02d}-K{ri(1,20):02d}"[:10], rc(DEPO), 'aktif',
            rdate(), rdate(), f"acik{i%99}"[:10]]

STOK_DETAY_COLS = ['id','stok_id','agirlik','hacim','renk','beden','malzeme','mensei',
                   'garanti','uretim_tar','son_kull','parti_no','seri_no','lot_no',
                   'kalite','tedarikci','raf_omru','ambalaj','etiket','ozellik']

def gen_stok_detay_row(i):
    return [i, i, f"{ri(1,999)/10:.1f}"[:10], f"{ri(1,999)/10:.1f}"[:10],
            rc(RENK), rc(['XS','S','M','L','XL','XXL','STD']),
            rc(MALZEME), rc(MENSEI), f"{ri(6,36)} ay"[:10], rdate(2023,2025),
            rdate(2025,2028), f"P{ri(1000,9999)}"[:10], f"SN{ri(10000,99999)}"[:10],
            f"L{ri(100,999)}"[:10], rc(KALITE), f"Ted{ri(1,200):03d}"[:10],
            f"{ri(3,60)} ay"[:10], rc(AMBALAJ), f"ETK{ri(1,999)}"[:10],
            f"OZ{ri(1,99)}"[:10]]

FATURA_COLS = ['id','musteri_id','fatura_no','tarih','vade_tar','tip','durum',
               'toplam','kdv','indirim','net','odeme_tip','aciklama','adres_id',
               'kargo','kargo_tak','onay_tar','iptal_tar','iade_tar','kayit_tar']

def gen_fatura_row(i, n_musteri):
    mid = ri(1, n_musteri)
    toplam = ri(50, 50000)
    kdv = int(toplam * 0.18)
    ind = ri(0, int(toplam * 0.1))
    tarih = rdate()
    return [i, mid, f"FT{i:07d}"[:10], tarih, rdate(), rc(FATURA_TIP), rc(['acik','kapali','iptal']),
            toplam, kdv, ind, toplam + kdv - ind, rc(ODEME), f"ac{i%999}"[:10], mid,
            rc(KARGO), f"TK{ri(100000,999999)}"[:10], tarih, '-', '-', tarih]

FIS_COLS = ['id','fatura_id','stok_id','miktar','birim_fiy','toplam','kdv_oran',
            'kdv_tutar','indirim','net','iskonto','kampanya','aciklama',
            'sira_no','birim','depo','parti_no','seri_no','durum','kayit_tar']

def gen_fis_row(i, n_fatura, n_stok):
    fid = (i - 1) // 3 + 1
    if fid > n_fatura: fid = ri(1, n_fatura)
    miktar = ri(1, 20)
    fiy = ri(10, 5000)
    top = miktar * fiy
    kdv_o = rc([1,8,18,20])
    return [i, fid, ri(1, n_stok), miktar, fiy, top, kdv_o,
            int(top * kdv_o / 100), ri(0, int(top * 0.05)), top,
            rc(['yok','5%','10%']), rc(['yok','kmpA','kmpB']),
            f"kl{i%999}"[:10], (i - 1) % 3 + 1, rc(BIRIM), rc(DEPO),
            f"P{ri(1000,9999)}"[:10], f"S{ri(10000,99999)}"[:10],
            'aktif', rdate()]

MUHASEBE_COLS = ['id','fatura_id','hesap_kod','tarih','borc','alacak','aciklama',
                 'belge_no','belge_tip','donem','kaynak','para_bir','kur',
                 'tutar','durum','onay','onay_tar','kayit_tar','guncelleme','kullanici']

def gen_muhasebe_row(i):
    tutar = ri(50, 50000)
    tarih = rdate()
    return [i, i, rc(HESAP), tarih, tutar, 0, f"mh{i%999}"[:10],
            f"BL{i:07d}"[:10], rc(['fatura','makbuz','dekont']),
            f"2024-{ri(1,12):02d}"[:10], rc(['satis','alis','gider']),
            'TRY', 1, tutar, 'aktif', rc(['evet','hayir']),
            tarih, tarih, rdate(), f"usr{ri(1,50)}"[:10]]

SARF_COLS = ['id','stok_id','ad','kod','miktar','birim','min_miktar','depo','raf',
             'tedarikci','son_alis','fiyat','kdv_oran','kategori','durum','aciklama',
             'marka','model','kayit_tar','guncelleme']

def gen_sarf_row(i, n_stok):
    return [i, ((i - 1) % n_stok) + 1, f"Srf{i:05d}"[:10], f"SM{i:06d}"[:10],
            ri(1, 1000), rc(BIRIM), ri(5, 50), rc(DEPO), f"R{ri(1,50):02d}"[:10],
            f"Ted{ri(1,200):03d}"[:10], rdate(), ri(5, 500), rc([1,8,18]),
            rc(KATEGORI), 'aktif', f"ac{i%99}"[:10], rc(MARKA),
            f"M{ri(1,99)}"[:10], rdate(), rdate()]

# ══════════════════════════════════════════════════
#  Bulk loader
# ══════════════════════════════════════════════════
def load_table(s, name, cols, gen_fn, total, gen_args=()):
    print(f"\n  {name} ({total:,} kayit)")
    t0 = time.time()
    batch = []
    ok = 0
    for i in range(1, total + 1):
        batch.append(gen_fn(i, *gen_args) if gen_args else gen_fn(i))
        if len(batch) >= BATCH:
            if batch_insert(s, name, cols, batch):
                ok += len(batch)
            batch = []
            if ok % 5000 < BATCH:
                progress(name, ok, total, t0)
    if batch:
        if batch_insert(s, name, cols, batch):
            ok += len(batch)
    elapsed = time.time() - t0
    print(f"\r  {name}: {ok:,}/{total:,} tamamlandi — {elapsed:.1f}s ({ok/elapsed:.0f} rows/s)        ")

# ══════════════════════════════════════════════════
#  Main
# ══════════════════════════════════════════════════
def main():
    print("=" * 60)
    print("  EvoSQL Veri Uretici — 8 tablo, ~1.84M kayit")
    print("  Distributed + Sharded (HASH, 4 shard/tablo)")
    print("=" * 60)

    s = conn()

    # Drop existing tables
    print("\n[1/3] Tablolar siliniyor...")
    for ddl in DDL_DROP:
        simple_query(s, ddl)

    # Create tables
    print("[2/3] Tablolar olusturuluyor...")
    for ddl in DDL_CREATE:
        _, _, err, _ = simple_query(s, ddl)
        if err:
            print(f"  HATA: {err[:200]}")
            return
        name = ddl.split("TABLE")[1].strip().split()[0].strip("(")
        print(f"  + {name}")

    # Load data
    print(f"\n[3/3] Veriler yukleniyor (batch={BATCH})...")
    t_start = time.time()

    load_table(s, "musteri",      MUSTERI_COLS,      gen_musteri_row,      N_MUSTERI)
    load_table(s, "stok",         STOK_COLS,         gen_stok_row,         N_STOK)
    load_table(s, "adres",        ADRES_COLS,        gen_adres_row,        N_ADRES)
    load_table(s, "stok_detay",   STOK_DETAY_COLS,   gen_stok_detay_row,   N_STOK_DETAY)
    load_table(s, "fatura",       FATURA_COLS,        gen_fatura_row,       N_FATURA, (N_MUSTERI,))
    load_table(s, "fis",          FIS_COLS,           gen_fis_row,          N_FIS, (N_FATURA, N_STOK))
    load_table(s, "muhasebe",     MUHASEBE_COLS,      gen_muhasebe_row,     N_MUHASEBE)
    load_table(s, "sarf_malzeme", SARF_COLS,          gen_sarf_row,         N_SARF, (N_STOK,))

    total_time = time.time() - t_start
    total_rows = N_MUSTERI + N_ADRES + N_STOK + N_STOK_DETAY + N_FATURA + N_FIS + N_MUHASEBE + N_SARF

    print(f"\n{'=' * 60}")
    print(f"  TOPLAM: {total_rows:,} kayit — {total_time:.0f}s ({total_rows/total_time:.0f} rows/s)")
    print(f"{'=' * 60}")

    s.close()

if __name__ == "__main__":
    main()
