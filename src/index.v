module src

import html

pub fn index() html.HtmlElementOrString {
	return page([
		html.h1('Hai!')
		html.p('I am Emma :D')
	])
}
