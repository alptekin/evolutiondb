/* EvolutionDB docs portal — shared chrome renderer.
   A page loads nav-data.js (which sets window.DOCS = {site, title, tagline,
   home, tree:[{title, icon, items:[{label, href}]}]}) then this script, which
   renders the top bar + sidebar and highlights the current page. No build step. */
(function () {
  var D = window.DOCS || { site: "", title: "EvolutionDB", tagline: "", home: "/", tree: [] };
  var here = location.pathname.replace(/index\.html$/, "");
  if (!here.endsWith("/")) here += "";

  function el(tag, cls, html) { var e = document.createElement(tag); if (cls) e.className = cls; if (html != null) e.innerHTML = html; return e; }

  // ---- top bar ----
  var bar = document.getElementById("topbar");
  if (bar) {
    bar.className = "fixed top-0 w-full z-50 h-16 flex items-center justify-between px-4 md:px-8 bg-glass-fill backdrop-blur-md border-b border-glass-border";
    bar.innerHTML =
      '<div class="flex items-center gap-3">' +
        '<button id="navToggle" class="lg:hidden material-symbols-outlined text-on-surface-variant">menu</button>' +
        '<a class="flex items-center gap-2" href="' + D.home + '">' +
          '<span class="material-symbols-outlined text-neon-cyan text-[28px]">database</span>' +
          '<span class="font-bold text-neon-cyan tracking-tight" style="font-family:Hanken Grotesk">EvolutionDB</span>' +
          '<span class="hidden sm:inline text-on-surface-variant text-sm" style="font-family:JetBrains Mono">' + (D.tagline || "") + '</span>' +
        '</a>' +
      '</div>' +
      '<nav class="flex items-center gap-5 text-sm">' +
        '<a class="hidden md:inline text-on-surface-variant hover:text-neon-cyan transition-colors" href="https://evolutiondb.org">Home</a>' +
        '<a class="hidden md:inline ' + (D.site === "developer" ? "text-neon-cyan" : "text-on-surface-variant hover:text-neon-cyan") + ' transition-colors" href="https://developer.evolutiondb.org">Developers</a>' +
        '<a class="hidden md:inline ' + (D.site === "wiki" ? "text-neon-cyan" : "text-on-surface-variant hover:text-neon-cyan") + ' transition-colors" href="https://wiki.evolutiondb.org">Wiki</a>' +
        '<a class="material-symbols-outlined text-on-surface-variant hover:text-neon-cyan transition-all" href="https://github.com/alptekin/evolutiondb" title="GitHub">code</a>' +
      '</nav>';
  }

  // ---- sidebar ----
  var side = document.getElementById("sidebar");
  if (side) {
    (D.tree || []).forEach(function (sec) {
      var s = el("div", "nav-section");
      s.appendChild(el("div", "nav-title",
        (sec.icon ? '<span class="material-symbols-outlined text-[16px] text-neon-cyan">' + sec.icon + "</span>" : "") + (sec.title || "")));
      (sec.items || []).forEach(function (it) {
        var a = el("a", "nav-link", it.label);
        a.href = it.href;
        var t = it.href.replace(/index\.html$/, "");
        if (t === here || (t !== "/" && here.indexOf(t) === 0)) a.classList.add("active");
        s.appendChild(a);
      });
      side.appendChild(s);
    });
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
