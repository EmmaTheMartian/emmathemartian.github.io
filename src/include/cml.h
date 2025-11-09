
#ifndef __cml_h__
#define __cml_h__

#include <stdio.h>

void cml_setout(FILE *stream);
int cml_getfmt(void);
void cml_setfmt(int formatted);
void cml_setindent(char *indent);

void cml(char *tag, char *format, ...);
void cml_noend(char *format, ...);
void cml_newf(char *tag, ...);
void cml_new(char *tag);
void cml_end(void);
void cml_text(char *format, ...);
void cml_vtext(char *format, va_list args);

#if defined(CML)
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

struct _cml_stacknode
{
	char *tag;
	struct _cml_stacknode *prev;
};

struct _cml_stacknode *_cml_tagstack = NULL;
static int _cml_indents = 0;
static FILE *_cml_out = NULL;
static int _cml_formatted = 1;
static const char *_cml_indent = "\t";

void _cml_printindents(void)
{
	for (int i = 0 ; i < _cml_indents ; i++)
		fputs(_cml_indent, _cml_out);
}

void cml_setout(FILE *stream)
{
	_cml_out = stream;
}

int cml_getfmt(void)
{
	return _cml_formatted;
}

void cml_setfmt(int formatted)
{
	_cml_formatted = formatted;
}

void cml_setindent(char *indent)
{
	_cml_indent = indent;
}

void cml(char *tag, char *format, ...)
{
	if (_cml_formatted)
		_cml_printindents();

	int old_formatted = _cml_formatted;
	_cml_formatted = 0;

	va_list ap;
	va_start(ap, format);
	cml_new(tag);
	cml_vtext(format, ap);
	cml_end();
	va_end(ap);

	_cml_formatted = old_formatted;

	if (_cml_formatted)
		fputc('\n', _cml_out);
}

void cml_noend(char *format, ...)
{
	if (_cml_formatted)
		_cml_printindents();

	int old_formatted = _cml_formatted;
	_cml_formatted = 0;

	fputc('<', _cml_out);
	va_list ap;
	va_start(ap, format);
	cml_vtext(format, ap);
	va_end(ap);
	fputs(" />", _cml_out);

	_cml_formatted = old_formatted;

	if (_cml_formatted)
		fputc('\n', _cml_out);
}

void cml_newf(char *tag, ...)
{
	struct _cml_stacknode *node = (struct _cml_stacknode *)malloc(sizeof(struct _cml_stacknode));
	/* Copy just the tag's actual tag, excluding parameters. */
	int len = 0;
	while (tag[len] != ' ' && tag[len] != '\0')
		len++;
	char *tag_tag = (char *)malloc(len + 1); /* Add 1 for null terminator */
	memcpy(&tag_tag[0], &tag[0], len);
	tag_tag[len] = '\0';
	node->tag = tag_tag;
	node->prev = _cml_tagstack;
	_cml_tagstack = node;

	if (_cml_formatted)
		_cml_printindents();
	fputc('<', _cml_out);
	va_list ap;
	va_start(ap, tag);
	vfprintf(_cml_out, tag, ap);
	va_end(ap);
	fputc('>', _cml_out);
	if (_cml_formatted)
		fputc('\n', _cml_out);
	_cml_indents++;
}

void cml_new(char *tag)
{
	cml_newf(tag);
}

void cml_end(void)
{
	struct _cml_stacknode *node = _cml_tagstack;
	_cml_tagstack = _cml_tagstack->prev;

	_cml_indents--;
	if (_cml_formatted)
		_cml_printindents();
	fprintf(_cml_out, "</%s>", node->tag);
	if (_cml_formatted)
		fputc('\n', _cml_out);

	free(node->tag);
	free(node);
}

void cml_text(char *format, ...)
{
	va_list ap;
	va_start(ap, format);
	cml_vtext(format, ap);
	va_end(ap);
}

void cml_vtext(char *format, va_list args)
{
	if (_cml_formatted)
		_cml_printindents();
	vfprintf(_cml_out, format, args);
	if (_cml_formatted)
		fputc('\n', _cml_out);
}
#endif /* CML */

#endif /* __cml_h__ */
