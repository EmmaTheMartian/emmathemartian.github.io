(fn [tokens]
  (var html "<ul>")

  (each [_ token (ipairs tokens)]
    (set html (.. html "<li>" token.text "</li>")))

  (set html (.. html "</ul>"))

  html)
