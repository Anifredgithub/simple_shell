#include "main.h"

char **find-path(char **environ)
{
	char *get-path, **tokens, *delim;

	delim = ":";
	get-path = getenv(environ, "PATH");
	tokens = splits(get-path, delim);
	return (tokens);
}
