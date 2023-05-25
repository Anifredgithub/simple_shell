#include "main.h"

void puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		put(str[j]);
	}
}
