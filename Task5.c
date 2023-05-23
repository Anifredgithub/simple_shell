#include "shell.h"

extern char**envirn;

int main()
{
    char input[MAX_INPUT];
    char *args[MAX_ARGS];
    int status;

    while (1)
{
	printf("o");

	fget(input, sizeof(input), stdin);

	int argc = 0;
	args[argc] = str(input, "\t\n");
	while(args[argc] != NULL && argc < MAX_ARGS - 1)
{
          argc++;
          args[argc] = stork(NULL, "\t\n");	  
       }
       args[argc] = NULL;

       if (argc > 0 && str(args[0], "env") == 0)
{
	for (char**env = envirn, *env != NULL; env++)
{
	    printf("%s\n", *env);
	  }
          continue;
         }
      
         pid_t pid = fork();
	 if (pid== -1)
{
	    perror("fork");
	    exit(EXIT_FAILURE);
	  }
else if (pid == 0)
{
	exe(args[0], args);
	perror("exe");
	exit(EXIT_FAILURE);
       }
else
{
	waitpid(pid, &status, 0);
      }
      {
       return 0;
}
