
#include <cml.h>
#include <partial.c>

void p_thoughts_cplusplus(void)
{
	page("Thoughts on C++");

	cml("a href='/thoughts/'", "Back to thoughts");

	cml("h1", "Thoughts on C++");

	cml("p", "I despise C++ for a lot of reasons. I have some reasons that are opinionated and others that are... less so.");
	cml("p", "I'll start with the more opinionated points, then go to the points I believe are more objective.");
	cml("p", "Additionally, these are *nitpicks*. A lot of small issues add up to a big issue, in my opinion.");

	cml("h2", "Syntactic Shortcomings");
	cml("p",
"This is one of the more common reasons that people dislike C++, \
and for good reason. C++ has a lot of really weird syntaxes that \
are questionable at best. The main example I think of is the abysmal \
syntax for writing a line to stdout:");
	cml("code", "std::cout << \"Hello, World!\" << std::endl;");
	cml("p",
"Why... why the heck did anyone think that it was a \
good idea to use a left bitshift operator overload for this... \
Even disregarding the syntax, this is also just flat out bad \
practice in my opinion. I'll get to that when I talk about \
operator overloads.");
	cml("p",
"Technically this isn't part of the syntax as much as it is the \
stdlib, since this is just an operator overload on an iostream. \
However the syntax of the language follows a similar style. The \
difference between a class and a struct, for example, is just \
the default access modifier. This is... weird to me, why don't \
you just use the struct keyword and add method support to it? Or \
better yet, don't even touch struct and leave it as a basic data \
structure instead of making it an OOP structure by default.");
	cml("p",
"Edit: C++23's std::println is MUCH nicer, though I feel like it \
probably should have been part of &lt;iostream&gt; instead of a \
new header, &lt;print&gt;. This is just a nitpick, though.");

	cml("h2", "Templates fit for a King- er- Turing Machine");
	cml("p",
"Okay don't get me wrong, I love polymorphic programming via \
templates. What I don't like is the complexity of C++ templates. \
Ever wanted <a href='https://stackoverflow.com/questions/189172/c-templates-turing-complete/'>turing complete</a> templates?");
	cml("p",
"A template for the purpose of polymorphism only needs a type \
parameter or two, i.e, <code>template &lt;typename T&gt;</code>. \
Everything else would be used in things other than polymorphism \
more often than not, and at that point I don't think a template \
is the right tool for the job.");
	cml("p", "C++ templates are certainly powerful. They're just... a bit *too* powerful in my opinion.");
	cml("p", "A double-whammy on templates and syntax: it took the C++ committee 32 years to improve the parser spec to parse <code>&gt;&gt;</code> properly in nested templates (C++11).");

	cml("h2", "Can Bitshifts Write Data? (Operator Overloading)");
	cml("p",
"This isn't unique to C++, but I'm including it here due to the \
atrocities of the left bitshift (\"stream write\") operator \
overload. The right bitshift (\"stream read\") operator is also \
equally terrible.");
	cml("p",
"Operator overloading makes it harder to tell what's going on \
under the hood. For a language that's built on C, I don't like \
being able to mask code like that. Of course I can always just \
jump-to-source, but the beauty of C to me is that I can look at \
any line and have a really good idea of what the ASM output will \
look like. In C++, as soon as I use an operator on a custom type \
from a library **or even the language's own standard library**, \
I don't know what that ASM could look like, and there could very \
well be a side-effect too that I didn't know about.");

	cml("h2", "Memory \"Safety\"");
	cml("p",
"C++ provides a variety of different pointer types, shared_ptr, \
unique_ptr, weak_ptr... they're all useless in my opinion. This \
could just be me being used to C pointers, but I really don't \
think that having different types of pointers is necessary. Feel \
free to disagree with me here, I won't judge you for that ;P");
	cml("p",
"I've met a lot of people who use C++ because they believe it's \
more safe than C (especially people new to it), when in reality \
there are *more* pitfalls in C++ than in C. You can easily \
misuse a pointer type, use the wrong cast (C-style casts are \
different than C++-style casts), or leak memory just like in C. \
C++ is *not* safer than C, and the false sense of safety that \
beginners tend to have doesn't help.");

	cml("h2", "The Standard Library");
	cml("p", "I'm no stranger to bad standard libraries. But C++'s really stands out from the rest because it's just *that* bad.");
	cml("p", "The stdlib of C++ took: (C++ was created in 1979, for reference)");
	cml_new("ul");
	cml("li", "32 years for a hash map implementation (std::unordered_(multi)?(set|map), from C++11). This one I can understand *to an extent* since C also doesn't provide a hash map implementation. On the other side, std::vector was implemented in C++98.");
	cml("li", "38 years for a simple function to check if a path exists (std::filesystem::exists, from C++17). Previously you had to use sys/stat.h just like in C.");
	cml("li", "44 years for a simple print function (std::println, from C++23)");
	cml_end();
	cml("p",
"Additionally, the C++23 spec \
(<a href='https://www.iso.org/standard/83626.html'>ISO/IEC 14882:2024</a>) \
is... 2104 pages. Two THOUSAND pages. The C23 spec \
(<a href='https://www.iso.org/standard/82075.html'>ISO/IEC 9899:2024</a>) \
is 758 pages. I don't have many other specifics on this since \
you have to *buy* the PDFs to read them, thanks ISO (sarcastic).");
	cml("p",
"Obviously some of the spec is the syntax and such too, however \
a lot of it is also going to consist of the standard libraries. \
I would get numbers for how many pages correspond to each \
language's respective standard libraries, but I'm not about to \
fork out over almost $553.30 USD to buy each spec for that.");
	cml("p",
"For reference: both the C++23 and C23 document cost 221 Swiss \
Franc (236.39 EUR or 276.65 USD as of 07/07/2025). I.e, $553.30 \
USD to get both. The links above for the ISO/IEC are to the ISO \
pages where I got the price and the page counts.");

	cml("h2", "\"C++ is just better C\"");
	cml("p",
"C++ and C are *fundamentally* different languages. C++ aimed to \
add an OOP paradigm to C, which completely changes how you go \
about writing code using the language. Their standard libraries \
are vastly different too. C provides what you *need*, C++'s is \
sugar on top.");

	cml("h2", "Note");
	cml("p",
"This page *is* intended for me to explain why I dislike C++, \
but it is *not* me intending to diss those who use C++. It's a \
perfectly capable language and I have absolutely zero judgement \
for anyone who uses it. I just happen to have plenty of \
judgement for the language itself.");

	endpage();
}
