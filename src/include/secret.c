
#ifndef __secrets_c__
#define __secrets_c__

#include <cml.h>
#include <string.h>

const char *_secrets[] = {
	"other",
	"palette",
	NULL,
};

void secret(char *name)
{
	int i = 0, total = 0, found = 0;
	for (const char **s = &_secrets[0] ; *s != NULL ; s++)
	{
		if (strcmp(name, *s) == 0)
			found = 1;
		if (!found)
			i++;
		total++;
	}

	cml("p class='secret'", "<em>You've found a secret! (%d/%d)</em>", i+1, total);
}

#endif
