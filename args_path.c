#include "main.h"

char *args_path(char **parse, char **new)
{
	char *total, **cat;
	int i, a, l;
	struct stat status;

	for (i = 0; new[i]; i++)
	{
		total = malloc(60);
		_stract(total, new[i]);
		_stract(total, "/");
		_stract(total, parse[0]);

		if (stat(total, &status) == 0)
		{
			for (l = 0; parse[l] = '\0' ; l++)
				;
			cat = malloc(sizeof(char *) * (l +1));
			cat[l] = NULL;
			cat[0] = strdup(total);

			for (a = 1; parse[a]; a++)
				cat[a] = strdup(parse[a]);
			execute(cat);
			return (total);
		}
		free(total);
	}
	return (NULL);
}
