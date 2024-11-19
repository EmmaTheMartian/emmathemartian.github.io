import os
import html
import css
import src

const build_path = 'build'

fn main() {
	if os.exists(build_path) {
		os.rmdir_all(build_path)!
	}
	os.mkdir(build_path)!

	css.parse('src/style/style.vcss', '${build_path}/style/style.css')

	html.build(build_path, {
		'index': src.index
		'other/index': src.other
		'contact/index': src.contact
		'about/index': src.about
		'projects/index': src.projects
	})
}
