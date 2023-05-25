#include "main.h"

void print_str(char *s)
{
	int i, bytes, wc;

	for (i = 0; s[i] != '\0'; i++)
		;

	bytes = i;

	wc = write(STDOUT_FILENO, s, bytes);
	if (wc == EOF)
		return;
}
