module src

import html

fn favourited_list(entries map[string][]string) html.HtmlElementOrString {
	mut list := []html.HtmlElementOrString{}
	for kind, values in entries {
		for value in values {
			list << html.li('${html.span(kind, class: 'material-symbols-outlined')} ${value}')
		}
	}
	return html.ul(list, class: 'favourited-list')
}

pub fn about() html.HtmlElementOrString {
	return page([
		html.h1('About Me')
		html.p('Oh so you are curious about me. Well, I am Emmeline (or just Emma).
		I enjoy programming, modded Minecraft, and lots of other assorted things.')
		html.p('Some random things about me:')
		html.ul([
			html.li('I am INTJ-T.')
			html.li('I enjoy automation, logistics, and rhythm games.')
			html.li('I am 17 and my birthday is March 21.')
			html.li('My favourite Vocaloids are Flower, GUMI, and Kagemine Len.')
			html.li('My favourite EDM (+subgenres) artists are Cjbeards, Creo, Camellia, Colbreakz, Dirty Palm, SOTAREKO, Kotori, and KSHMR.')
			html.li('My favourite non-EDM artists are Arctic Monkeys, The Amity Affliction, Two Door Cinema Club, Senses Fail, Three Days Grace, and Fall Out Boy.')
			html.li('My favourite drink is hot chocolate, then lemonade as a close sefcond. I do not drink anything carbonated and I very rarely drink anything caffeinated.')
			html.li('I enjoy modding video games, primarily Minecraft.')
			html.li('I love fog, rain, and snow. Calm sunny days with a breeze are also comforting.')
			html.li('I use tabs for indentation and a tab width of 8 spaces.')
		])
		html.hr()
		html.h2('Interests')
		html.ul([
			html.li('Programming')
			html.li('Gaming (primarily automation/logistics games)')
			html.li('Linux')
			html.li('Linguistics')
			html.li('Psychology')
			html.li('Learning')
			html.li('Astronomy')
		])
		html.hr()
		html.h2('Key')
		favourited_list({
			'favorite': [ 'Favourite' ]
			'thumb_up': [ 'Like' ]
			'rainy': [ 'Dislike' ]
		})
		html.hr()
		html.h2('Games')
		favourited_list({
			'favorite': [
				'Modded Minecraft'
				'Beat Saber'
				'Rec Room'
				'Portal'
				'Project Sekai'
				'Terraria'
				'Vanilla Minecraft (1.6.4 and before)'
			]
			'thumb_up': [
				'Forager'
				'SNKRX'
				'Genshin Impact'
				'Honkai: Star Rail'
				'Borderlands 2'
				'Stardew Valley'
				'Satisfactory'
			]
			'rainy': [
				'Vanilla Minecraft (after 1.6.4)'
			]
		})
		html.hr()
		html.h2('Music Tastes')
		favourited_list({
			'favorite': [
				'EDM'
				'Dubstep'
				'Breakcore'
				'Drumstep'
				'Emo'
				'Vocaloid'
				'2000s Alternative'
			]
			'thumb_up': [
				'Metal'
				'Metalcore'
			]
			'rainy': [
				'Country'
				'Modern Rap'
			]
		})
		html.hr()
		html.h2('Programming Languages')
		favourited_list({
			'favorite': [
				'C'
				'Lua (for embedded scripting)'
				'Kotlin'
				'V'
			]
			'thumb_up': [
				'Java'
				'Python'
			]
			'rainy': [
				'Lua (outside of embedded scripting)'
				'JavaScript'
				'C++'
			]
		})
		html.hr()
		html.h2('Minecraft Mods')
		favourited_list({
			'favorite': [
				'GregTech'
				'IndustrialCraft 2'
				'Applied Energistics 2'
				'Psi'
				'Create'
			]
			'thumb_up': [
				'Immersive Engineering'
				'Ars Nouveau'
				'Botania'
			]
		})
		html.hr()
		html.p('The contents of this page are basically ripped straight from my ${html.a('pronouns.cc page', 'pronouns.cc/@EmmaTheMartian')}.')
	])
}
