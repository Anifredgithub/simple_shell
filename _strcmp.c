#include "main.h"

int _strcmp(char *varname, char *dirname)
{
	int j;

	for (j = 0; dirname[j] != '\0'; j++)
	{
		if (dirname[j] != varname[j])
			return (0);
	}
	return (1);
}
