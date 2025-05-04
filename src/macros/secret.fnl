(fn [tokens]
  (let [secret (. (. tokens 1) "text")]
    (string.format "<p class='secret'><em>You've found a secret! (%d/%d)</em></p>" (. seal.vars (.. "secret." secret)) seal.vars.secrets)))