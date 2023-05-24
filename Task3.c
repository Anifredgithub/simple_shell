#include "shell.h"

 int main()
 {
 char input['MAX_PATH_LENGTH'];

 while (1)
 {
 fgets(input, sizeof(input), stdin);
 input[strcspn(input, "\n")] = '\0';
 if (access(input, 'x_ok') == 0 || str(input,'/') != NULL)
{
}
else
{
	char *path = env("PATH");
	char path_copy[MAX_PATH_LENGTH];
	str(path_copy, path, sizeof)(path_copy);
	char *dir = str(path_copy, ":");
	while (dir !=NULL)
{
        }
        
        dir = str(NULL, ":");
	}
        if (dir == NULL)
{
	write(stder, "%s:command not availble\n",input);
}
}
}
