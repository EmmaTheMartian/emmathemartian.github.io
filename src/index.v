module src

import html

pub fn index() html.HtmlElementOrString {
	return page([
		html.h1('Hai!')
		html.p('I am Emma :D')
		html.p('You are probably looking for information about me or how to contact me. Both of those are available in the navigation bar above :P')
		html.p('To make it look like the index page actually has some content, I am going to rant about what I used to make this website.')
		html.ul([
			html.li('Catppuccin Latte/Macchiatto colour schemes (light and dark respectively)')
			html.li('Google Material Symbols')
			html.li('Montserrat and Space Mono fonts from Google Fonts')
		])
		html.p('However that\'s the normal stuff. Now for the fun stuff:
		I dislike writing HTML/CSS/JS but like writing websites. The solution?
		Simple: ditch it. I wrote this website with V. Check out the website\'s source code ${html.a('here', 'https://github.com/emmathemartian/emmathemartian.github.io')} if you are interested!')
	])
}
