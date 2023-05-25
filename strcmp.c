#include "main.h"

int strcmp(char *varname, char *dirname)
{
	int a;

	for (a = 0; dirname[a] != '\0'; a++)
	{
		if (dirname[a] != varname[a])
			return (0);
	}
	return (1);
}
