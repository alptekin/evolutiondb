/* EvolutionDB docs portal — shared Tailwind config (Lumina Nexus / glassify).
   Loaded AFTER the Tailwind CDN script on every page so all of developer.* and
   wiki.* share one theme. */
tailwind.config = {
  darkMode: "class",
  theme: {
    extend: {
      colors: {
        "tertiary": "#ffd6a3", "on-surface-variant": "#bbc9cd",
        "surface-container-highest": "#31353f", "glass-fill": "rgba(30, 41, 59, 0.6)",
        "surface-tint": "#2fd9f4", "surface-base": "#1E293B",
        "surface-container-lowest": "#0a0e17", "background": "#0f131c",
        "secondary-container": "#3131c0", "on-secondary-container": "#b0b2ff",
        "surface-variant": "#31353f", "surface-container": "#1c1f29",
        "tertiary-container": "#ffb13b", "surface-bright": "#353943",
        "surface-container-high": "#262a34", "neon-cyan": "#22D3EE",
        "glass-border": "rgba(255, 255, 255, 0.1)", "pure-white": "#FFFFFF",
        "deep-indigo": "#6366F1", "primary-container": "#22d3ee",
        "surface": "#0f131c", "secondary": "#c0c1ff",
        "outline-variant": "#3c494c", "surface-container-low": "#181b25",
        "outline": "#859397", "on-surface": "#dfe2ef", "on-primary": "#00363e",
        "primary": "#8aebff", "on-background": "#dfe2ef", "surface-dim": "#0f131c"
      },
      borderRadius: { "DEFAULT": "1rem", "lg": "2rem", "xl": "3rem", "full": "9999px" },
      spacing: { "margin-sm": "16px", "gutter": "24px", "margin-md": "32px",
                 "container-max": "1280px", "unit": "8px", "margin-lg": "64px" },
      fontFamily: {
        "headline-lg": ["Hanken Grotesk"], "body-lg": ["Inter"], "body-md": ["Inter"],
        "headline-md": ["Hanken Grotesk"], "display-lg": ["Hanken Grotesk"],
        "code-sm": ["JetBrains Mono"], "label-caps": ["JetBrains Mono"]
      }
    }
  }
}
