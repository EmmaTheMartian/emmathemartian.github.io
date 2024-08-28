module src

import html

pub fn other() html.HtmlElementOrString {
	return page([
		html.p('welcome to the other page'),
		html.p('no, there is not anything to do here'),
		html.hr()
		html.p('Other: "Did you know that Turquoise is considered the best colour"')
		html.p('Me: "I have never heard of this"')
		html.p('Other: "It\'s ${html.em('cyantifically')} proven"')
	])
}
