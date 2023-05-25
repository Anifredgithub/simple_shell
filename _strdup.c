#include "main.h"

char *strd(char *str)
{
	char *new;
	int i;

	if (str == NULL)
		return (NULL);

	new = malloc(strlen(str) + 1);

	if (new == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
	{
		new[i] = str[i];
		i++;
	}

	new[i] = '\0';

	return (new);
}
