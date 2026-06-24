/* docs portal - chrome renderer with a PostgreSQL-style version selector +
   breadcrumb + prev/next, on top of the shared sidebar. Reads window.DOCS
   (from nav-data.js) and window.EVODB (from version.js). The displayed version
   always comes from version.js, which is generated from src/include/version.h.
   No build step. */
(function () {
  var D = window.DOCS || { tree: [] };
  var V = window.EVODB || {};                 // generated from src/include/version.h
  var FULLVER = V.version || D.version;        // full version string for display, read from version.js
  var here = location.pathname; if (!here.endsWith("/")) here += "/";
  function el(t, c, h) { var e = document.createElement(t); if (c) e.className = c; if (h != null) e.innerHTML = h; return e; }

  // ---- top bar with version selector ----
  var bar = document.getElementById("topbar");
  if (bar) {
    bar.className = "fixed top-0 w-full z-50 h-16 flex items-center justify-between px-4 md:px-8 bg-glass-fill backdrop-blur-md border-b border-glass-border";
    var vers = (D.versions || []).map(function (x) {
      var isCur = x.v === D.version;
      var label = isCur ? (FULLVER + " (latest)") : (x.label || x.v);
      return '<option value="' + x.v + '"' + (isCur ? " selected" : "") + '>' + label + "</option>";
    }).join("");
    bar.innerHTML =
      '<div class="flex items-center gap-x-5 lg:gap-x-7">' +
        '<button id="navToggle" class="lg:hidden material-symbols-outlined text-on-surface-variant">menu</button>' +
        '<a class="flex items-center gap-2" href="' + D.home + '">' +
          '<span class="material-symbols-outlined text-neon-cyan text-[28px]">database</span>' +
          '<span class="font-bold text-neon-cyan tracking-tight text-[18px]" style="font-family:Hanken Grotesk">EvolutionDB</span>' +
        '</a>' +
        (vers ? '<select id="verSel" class="verselect">' + vers + "</select>" : "") +
        '<nav class="hidden lg:flex items-center gap-x-5 xl:gap-x-7">' +
          [['HOME','https://evolutiondb.org/','home'],['FEATURES','https://evolutiondb.org/features/','features'],['COMPARISON','https://evolutiondb.org/comparison/','comparison'],['DOCS','https://docs.evolutiondb.org/','docs'],['DEVELOPERS','https://developer.evolutiondb.org/','developer'],['AGENT','https://evolutionagent.evolutiondb.org/','agent'],['WIKI','https://wiki.evolutiondb.org/','wiki']].map(function (s) {
            var base = 'font-label-caps text-[11px] uppercase tracking-widest transition-colors';
            var cls = (s[2] === D.site)
              ? 'relative text-neon-cyan ' + base + " after:content-[''] after:absolute after:-bottom-2 after:left-0 after:w-full after:h-0.5 after:bg-neon-cyan after:rounded-full"
              : 'text-on-surface-variant hover:text-neon-cyan ' + base;
            return '<a class="' + cls + '" href="' + s[1] + '">' + s[0] + '</a>';
          }).join('') +
        '</nav>' +
      '</div>' +
      '<a class="material-symbols-outlined text-on-surface-variant hover:text-neon-cyan transition-all text-[22px]" href="https://github.com/alptekin/evolutiondb" title="GitHub">code</a>';
    var vsel = document.getElementById("verSel");
    if (vsel) vsel.addEventListener("change", function () {
      // swap the /<oldver>/ segment for the chosen one
      location.pathname = here.replace("/" + D.version + "/", "/" + this.value + "/");
    });
  }

  // ---- sidebar + flattened order for prev/next ----
  var flat = [];
  var side = document.getElementById("sidebar");
  (D.tree || []).forEach(function (sec) {
    if (side) {
      var s = el("div", "nav-section");
      s.appendChild(el("div", "nav-title",
        (sec.icon ? '<span class="material-symbols-outlined text-[16px] text-neon-cyan">' + sec.icon + "</span>" : "") + (sec.title || "")));
      side.appendChild(s);
      sec._box = s;
    }
    (sec.items || []).forEach(function (it) {
      flat.push({ label: it.label, href: it.href, section: sec.title });
      if (side) {
        var a = el("a", "nav-link", it.label); a.href = it.href;
        var t = it.href; if (!t.endsWith("/")) t += "/";
        if (t === here) a.classList.add("active");
        sec._box.appendChild(a);
      }
    });
  });

  // ---- breadcrumb + prev/next around the current page ----
  var idx = -1;
  for (var i = 0; i < flat.length; i++) { var t = flat[i].href; if (!t.endsWith("/")) t += "/"; if (t === here) { idx = i; break; } }
  var main = document.querySelector("main.docs-content");
  if (main && idx >= 0) {
    var cur = flat[idx];
    var bc = el("div", "breadcrumb",
      '<a href="' + D.home + '">EvolutionDB ' + FULLVER + "</a> &nbsp;›&nbsp; " +
      (cur.section || "") + " &nbsp;›&nbsp; <span style=\"color:#bbc9cd\">" + cur.label + "</span>");
    main.insertBefore(bc, main.firstChild);

    var pn = el("div", "prevnext");
    if (idx > 0) { var p = flat[idx - 1]; pn.appendChild(el("a", "pv", '<small>‹ Prev</small>' + p.label)).href = p.href; }
    else pn.appendChild(el("span"));
    if (idx < flat.length - 1) { var n = flat[idx + 1]; var a2 = el("a", "nx", '<small>Next ›</small>' + n.label); a2.href = n.href; pn.appendChild(a2); }
    main.appendChild(pn);
  }

  // ---- fill version placeholders (value comes from version.js / version.h) ----
  Array.prototype.forEach.call(document.querySelectorAll("[data-evodb-version]"), function (n) { n.textContent = FULLVER; });
  Array.prototype.forEach.call(document.querySelectorAll("[data-evodb-channel]"), function (n) { n.textContent = D.version; });

  // ---- mobile drawer ----
  var toggle = document.getElementById("navToggle");
  if (toggle && side) {
    var ov = el("div"); ov.style.cssText = "position:fixed;inset:64px 0 0;z-index:35;background:rgba(0,0,0,.5);display:none";
    document.body.appendChild(ov);
    function close() { side.classList.remove("open"); ov.style.display = "none"; }
    toggle.addEventListener("click", function () { var o = side.classList.toggle("open"); ov.style.display = o ? "block" : "none"; });
    ov.addEventListener("click", close);
    side.addEventListener("click", function (e) { if (e.target.classList.contains("nav-link")) close(); });
  }
})();
