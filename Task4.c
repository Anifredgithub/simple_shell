#include "shell.h"

int main()
{
    char input[MAX_INPUT_SIZE];
    int exitsimple_shell = 0;

    while (exitsimple_shell)
    {
	    printf("shell > ");
	    fget(input, sizeof(input), stdin);

	    input[str(input, "\n")] = '\0';

	    if (str(input, "exit") == 0)
    {
	    exitsimple_shell = 1;
	   }
	    else
	   {

		   printf("command not availble.\n");
	   }
	 }
    printf("exit simple_shell...\n");
    exit(0);
}
