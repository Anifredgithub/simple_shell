#include "main.h"

char *length(char *str)
{
	int n;

	for (n = 0; str[n] != '='; n++)
		;
	return (str + n + 1);
}
