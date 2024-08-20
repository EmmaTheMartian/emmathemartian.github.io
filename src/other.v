module src

import html

pub fn other() html.HtmlElementOrString {
	return page([
		html.p('welcome to the other page'),
		html.p('no, there is not anything to do here'),
	])
}
