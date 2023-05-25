#include "main.h"

char *length(char *str)
{
	int o;

	for (o = 0; str[o] != '='; o++)
		;
	return (str + o + 1);
}
