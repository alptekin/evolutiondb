/* docs.evolutiondb.org — chrome renderer with a PostgreSQL-style version
   selector + breadcrumb + prev/next, on top of the shared sidebar. Reads
   window.DOCS (from nav-data.js). No build step. */
(function () {
  var D = window.DOCS || { tree: [] };
  var here = location.pathname; if (!here.endsWith("/")) here += "/";
  function el(t, c, h) { var e = document.createElement(t); if (c) e.className = c; if (h != null) e.innerHTML = h; return e; }

  // ---- top bar with version selector ----
  var bar = document.getElementById("topbar");
  if (bar) {
    bar.className = "fixed top-0 w-full z-50 h-16 flex items-center justify-between px-4 md:px-8 bg-glass-fill backdrop-blur-md border-b border-glass-border";
    var vers = (D.versions || []).map(function (x) {
      return '<option value="' + x.v + '"' + (x.v === D.version ? " selected" : "") + '>' + x.label + "</option>";
    }).join("");
    bar.innerHTML =
      '<div class="flex items-center gap-3">' +
        '<button id="navToggle" class="lg:hidden material-symbols-outlined text-on-surface-variant">menu</button>' +
        '<a class="flex items-center gap-2" href="' + D.home + '">' +
          '<span class="material-symbols-outlined text-neon-cyan text-[28px]">database</span>' +
          '<span class="font-bold text-neon-cyan tracking-tight" style="font-family:Hanken Grotesk">EvolutionDB</span>' +
          '<span class="hidden sm:inline text-on-surface-variant text-sm" style="font-family:JetBrains Mono">' + (D.tagline || "") + '</span>' +
        '</a>' +
        (vers ? '<select id="verSel" class="verselect ml-2">' + vers + "</select>" : "") +
      '</div>' +
      '<nav class="flex items-center gap-5 text-sm">' +
        '<a class="hidden md:inline text-on-surface-variant hover:text-neon-cyan transition-colors" href="https://evolutiondb.org">Home</a>' +
        '<a class="hidden md:inline text-on-surface-variant hover:text-neon-cyan transition-colors" href="https://developer.evolutiondb.org">Developers</a>' +
        '<a class="hidden md:inline text-on-surface-variant hover:text-neon-cyan transition-colors" href="https://wiki.evolutiondb.org">Wiki</a>' +
        '<a class="material-symbols-outlined text-on-surface-variant hover:text-neon-cyan transition-all" href="https://github.com/alptekin/evolutiondb" title="GitHub">code</a>' +
      '</nav>';
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
      '<a href="' + D.home + '">EvolutionDB ' + D.version + "</a> &nbsp;›&nbsp; " +
      (cur.section || "") + " &nbsp;›&nbsp; <span style=\"color:#bbc9cd\">" + cur.label + "</span>");
    main.insertBefore(bc, main.firstChild);

    var pn = el("div", "prevnext");
    if (idx > 0) { var p = flat[idx - 1]; pn.appendChild(el("a", "pv", '<small>‹ Prev</small>' + p.label)).href = p.href; }
    else pn.appendChild(el("span"));
    if (idx < flat.length - 1) { var n = flat[idx + 1]; var a2 = el("a", "nx", '<small>Next ›</small>' + n.label); a2.href = n.href; pn.appendChild(a2); }
    main.appendChild(pn);
  }

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
