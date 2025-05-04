(local nav (require "data.nav"))

(fn [_tokens]
  (var html "<nav>")

  (local links {})
  (each [_ n (ipairs nav)]
    (table.insert links (string.format "<a href=\"%s\">%s</a>" n.url n.name)))

  (local end (# links))
  (each [i a (ipairs links)]
    (if (= i end)
      (set html (.. html a))
      (set html (.. html a " - "))))

  (set html (.. html "</nav>"))

  html)
