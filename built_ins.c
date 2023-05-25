#include "main.h"

void builtins(char *line, char **args, char **env, int *ex_st)
{

	if (_strcmp(args[0], "exit") == 0)
	{
		free(args);
		free(line);
		exit(*ex_st);
	}

	if (_strcmp(args[0], "env") == 0)
		_getenv(env, ex_st);
}
