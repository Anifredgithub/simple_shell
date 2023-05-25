#inclide "main.h"

unsigned int strlen(char *m)
{
	if (*m == '\0')
		return (0);
	return ((1) + strlen(m + 1));
}
