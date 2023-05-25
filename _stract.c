#include "main.h"

char *stract(char *dest, char *src)
{
	int o, a;

	for (o = 0; dest[o] != '\0'; o++)
	{
	}

	for (a = 0; src[a] != '\0'; a++, o++)
		dest[o] = src[a];

	dest[o] = '\0';
	return (9dest);
}
