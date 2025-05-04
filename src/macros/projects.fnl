(local projects (require "data.projects"))

(fn [_tokens]
  (var html "<table><tr><th>Name</th><th>Kind</th><th>Description</th><th>Status</th></tr>")

  (each [_ project (ipairs projects)]
    (set html (string.format
      "%s<tr><td><a href=\"%s\">%s</a></td><td>%s</td><td>%s</td><td>%s</td></tr>"
      html
      project.repo
      project.name
      project.kind
      project.desc
      project.status)))

  (set html (.. html "</table>"))

  html)
