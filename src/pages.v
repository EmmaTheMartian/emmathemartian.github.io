module src

import time
import html

const site_nav = html.nav([
	html.a('index', '/')
	html.a('about', '/about/')
	html.a('contact', '/contact/')
	html.a('projects', '/projects/')
])

const site_footer = html.div([
	html.hr()
	html.p('Site compiled at ${html.code(time.now().str())}')
], parameters: { 'class': 'footer' })

const site_head = html.head([
	html.title('Emma\'s Website')
	html.link('stylesheet', '/style/style.css')
	html.link('stylesheet', 'https://fonts.googleapis.com/icon?family=Material+Symbols+Outlined:opzs,wght,FILL,GRAD@20,400,0,0')
])

pub fn page(content []html.HtmlElementOrString) html.HtmlElementOrString {
	mut body := []html.HtmlElementOrString{}
	body << site_nav
	body << content
	body << site_footer

	return html.html([
		site_head
		html.body(body)
	], no_indent: true)
}
