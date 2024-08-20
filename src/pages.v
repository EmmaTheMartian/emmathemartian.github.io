module src

import time
import html

pub const site_nav = html.nav([
	html.a('index', '/')
	html.a('other', '/other/')
	html.a('about', '/about/')
	html.a('contact', '/contact/')
])

pub const site_footer = html.div([
	html.hr()
	html.p('Site compiled at ${html.code(time.now().str())}')
], parameters: { 'class': 'footer' })

pub const site_head = html.div([
	html.title('Emma\'s Website')
	html.link('stylesheet', '/style/style.css')
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
