#include "shell.h"

 int main()
 {
 char input[MAX_PATH_LENGTH];

 while (1)
 {
 fgets(input, sizeof(input), stdin);
 input[strcspn(input, "\n")] = '\0';

 if (access(input, x_ok) == 0 || stchrr(input,'/') != NULL)

else
{
	char *path = getenv("PATH");
	char path_copy[MAX_PATH_LENGTH];
	strncpy(path_copy, path, sizeof(path_copy));
	path_copy[sizeof(path_copy) - 1] = '\0';

	char *dir = strtok(path_copy, ":");
	while (dir != NULL)
{       
        dir = strtok(NULL, ":");
	}
        if (dir == NULL)
{
	write(STDERR_FILENO,, "%s:command not availble\n",input);
   }
  }
 }
  return 0;
}
