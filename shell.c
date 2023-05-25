#include "main.h"

int main(int argc, char **argv, char **environ)
{
	char *line = NULL;
	char *deline = "\t \a\n"
		char *command;
	char **tokens;
	(void)argc;

	token = find-path(environ);

	signal(SIGNINT, SIG_IGN);
	while (1)
	{
		line = read-line();
		argv = splits(line, delim);
		command = args-path(argv, tokens);
		if (command == NULL)
			execute(argv);
		free(line);
		free(argv);
		free(command);
	}
	return (0);
}
