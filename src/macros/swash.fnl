(fn [tokens]
  (let [colour (. (. tokens 1) "text")]
    (.. "<div class='swash' style='background-color:" colour "'></div>")))
