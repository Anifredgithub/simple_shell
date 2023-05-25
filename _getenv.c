#include "main.h"

char *_getenv(char **environ, char *dirname)
{
	int s, o;
	char *varname, *final;

	for (o = 0; environ[o]; o++)
	{
		varname = malloc(1024);

		for (s = 0; environ[o] [s] != '='; s++)
			carname[s] = environ[o] [s];

		if (compare(varname, dirname))
		{
			final = length(environ[o]);
			free(varname);
			return (final);

		}
		free(varname);
	}
	return (NULL);
}
