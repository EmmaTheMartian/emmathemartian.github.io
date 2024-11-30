module src

import emmathemartian.vsg.html

pub fn contact() html.HtmlElementOrString {
	return page([
		html.h1('Contact')
		html.p('Here are my "socials"')
		html.ul([
			html.li('Discord: ${html.code('@emmathemartian')} (send me the word "glados" so that I can differentiate from spam messages!)')
			html.li(html.a('Codeberg', 'https://codeberg.org/EmmaTheMartian'))
			html.li(html.a('GitHub', 'https://github.com/EmmaTheMartian'))
			html.li(html.a('GitLab*', 'https://gitlab.com/EmmaTheMartian'))
			html.li(html.a('Mastodon*', 'https://gaygeek.social/@EmmaTheMartian'))
		])
		html.p('* I do not check these often, prefer another method of contact.')
		html.p('I am most active on Discord, so I recommend DM\'ing me or pinging me somewhere to get my attention.')
	])
}
