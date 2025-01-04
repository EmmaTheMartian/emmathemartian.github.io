module src

import emmathemartian.vsg.html

fn favourited_list(entries map[string][]string) html.HtmlElementOrString {
	mut list := []html.HtmlElementOrString{}
	for kind, values in entries {
		for value in values {
			list << html.li('${html.span(kind, class: 'material-symbols-outlined')} ${value}')
		}
	}
	return html.ul(list, class: 'favourited-list')
}

fn ul(entries []string) html.HtmlElementOrString {
	mut list := []html.HtmlElementOrString{}
	for entry in entries {
		list << html.li(entry)
	}
	return html.ul(list)
}

pub fn about() html.HtmlElementOrString {
	return page([
		html.h1('About Me')
		html.p('Oh so you are curious about me. Well, I am Emmeline (or just Emma)!')
		html.p('Please note: this information is just me info dumping about my interests but is not comprehensive nor in complete detail.
		If you want more details about me or one of my interests, ${html.a('contact', '/contact/')} me and ask! :D')
		html.p('Some random things about me that do not really fit into any other categories:')
		html.ul([
			html.li('I am INTJ-T.')
			html.li('My favourite drink is hot chocolate, then lemonade as a close second. I do not drink anything carbonated and I very rarely drink anything caffeinated.')
			html.li('I love fog, rain, and snow. Calm sunny days with a breeze are also comforting.')
			html.li('My favourite font is ${html.a('Miracode', 'https://github.com/IdreesInc/Miracode')}, and I use it basically anywhere possible.')
		])
		html.hr()
		html.h2('Games')
		html.p('I primarily play modded Minecraft, Terraria, and assorted rhythm games.
		I enjoy automation/logistics (modded Minecraft and Satisfactory) and a nice challenge (modded Terraria and rhythm games).
		Portal is also one of my favourites. The lore and gameplay are masterfully made :D')
		html.p('As of writing this, I have been playing Terraria with the Calamity and Infernum mods.
		It has been... very tough, but extremely enjoyable.')
		html.details([
			html.summary('List Form')
			favourited_list({
				'favorite': [
					'Modded Minecraft'
					'Beat Saber'
					'Portal'
					'Project Sekai'
					'Terraria'
					'Vanilla Minecraft (1.6.4 and before)'
					'Rhythia'
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
			})
		])
		html.hr()
		html.h2('Music')
		html.p('For the most part I listen to EDM (and its many subgenres), 2000s Alternative, and Emo. Indie rock is also a fun genre :D')
		html.p('I also listen to Vocaloid a good bit. For the 2 Vocaloid nerds reading this, my favourites are GUMI, Flower, and Len.')
		html.p('I really enjoy getting my favourite albums on vinyl.')
		html.p('As for what music genres I dislike, country. Most other genres I enjoy or am neutral about.')
		html.p('My favourite songs are Old Yellow Bricks by Arctic Monkeys and Looking For Edge Of Ground by Camellia.')
		html.br()
		html.details([
			html.summary('Favourite Artists (ordered alphabetically)')
			ul([
				'Arctic Monkeys'
				'Bullet for My Valentine'
				'Camellia'
				'Cjbeards'
				'Colbreakz'
				'Creo'
				'Dirty Palm'
				'Fall Out Boy'
				'femtanyl'
				'hkmori'
				'Kotori'
				'KSHMR'
				'My Chemical Romance'
				'Paramore'
				'Senses Fail'
				'SOTAREKO'
				'STOMACH BOOK'
				'STYXVII'
				'The Amity Affliction'
				'Three Days Grace'
				'Two Door Cinema Club'
			])
		])
		html.hr()
		html.h2('Visual Media')
		html.p('I do not watch very many movies, but I do really enjoy ${html.em('Lord of the Rings')} and ${html.em('The Hobbit')}.
		${html.em('Lilo and Stitch')} and ${html.em('Big Hero 6')} are my favourite Disney films, and I have a lot of Stitch plushies and such.')
		html.p('I do not watch TV, but I do enjoy Netflix sometimes.')
		html.p('Ultimately, when I watch media, I typically am watching content related to one of my interests, which you are reading about now!')
		html.hr()
		html.h2('Programming')
		html.p('I primarily work in V, Kotlin, and Java. The latter two are used for Minecraft modding and I use the former for almost everything else.
		I do not particularly like Java but after using it so often, I have grown to just suck it up. Kotlin, C, V, and embedded Lua are my four favourite languages.
		Python is okay but I only really use it for prototypes, Discord bots, and small CLI applications.
		C++ is probably one of my most disliked languages. I despise its standard library with a passion. Not to mention its unholy syntax...')
		html.p('Also, I use tabs for indentation and a tab-width of 8 spaces.')
		html.p('I use VSCodium for most things, although I use Intellij IDEA for Minecraft modding. I typically use Neovim when making small edits to files though.')
		html.hr()
		html.h2('Minecraft')
		html.p('I do a ${html.strong('lot')} of Minecraft modding and play a lot of modded Minecraft. Just as my favourite game genres, I like automation and logistics in Minecraft too.
		GregTech and IC2 are wonderful and are my favourites. Psi and AE2 are also really fun.
		I have a love-hate relationship with Create. I love the mod but dislike the recipes and progression. That is probably because I am so used to the microcrafting of GregTech though.
		I also really like Immersive Engineering and Botania.
		I am iffy about Mekanism. In a pack where there are not many other major tech mods, it is fun. But with others it becomes extremely overpowered and in my experiences, it is quite difficult to rebalance.')
		html.p('I use fairly unique keybinds and people seem to find them weird XD. I use E for use/place block, Tab for my inventory, Mouse 4 for crouch, and Mouse 5 for sprint.')
		html.hr()
		html.h2('Assorted Interests and Hobbies')
		html.p('I really like astronomy, psychology, world building, and linguistics.')
		html.p('I quite like making conlangs and often make them for worlds that I am building. I enjoy going into absurd detail with my worlds, for
		example in the main world that I spend my time working on, I have marked tectonic plate edges on the map so that I can use them as I am developing
		other portions of the map. I planning to make multiple languages and dialects for different nations, regions, and cities.')
		// Using single quotes in string formatting seems to cause issues if there is an escaped single quote
		// For whatever reason, using double quotes *and* escaping the single quote does work.
		// todo: Report this to the V's issue tracker
		html.p('Reading is also enjoyable, particularly dystopian and fantasy novels.
		${html.em('1984')} by George Orwill is my favourite book.
		${html.em("Ender\'s Game")} by Orson Scott Card and ${html.em("The Hitchhiker\'s Guide to the Galaxy")} by Douglas Adams are also really good.')
		html.hr()
		html.h2('Emoticons and Emojis')
		html.p('You have probably already noticed this: I use a lot of emoticons.
		Primarily: ${html.code('XD')}, ${html.code(';-;')}, ${html.code(':D')}, ${html.code('>:D')}, ${html.code(':P')}')
		html.p('I tend to use them often so that I can give a lighthearted or joking tone to my messages.')
		html.hr()
		html.h2('Other')
		html.p('Wait did you actually read everything here?')
		html.p('Anyway, if there is another thing you want to know about me, ask me personally! Fear not, I do not bite.')
	])
}
