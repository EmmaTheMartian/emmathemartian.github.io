(fn [tokens]
  (string.format "<head><title>Emma's Website - %s</title><link rel='stylesheet' href='/static/style.css'/></head><body>" (. (. tokens 1) "text")))
