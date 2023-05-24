#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
#define MAX_PATHLENGTH 1024

int main(int argc, char**argv, char**envp)
    char input[MAX_PATH_LENGTH];
int sum(int num1, int num2);
void prompt(char **av, char **env);
int main(int ac, char **av, char **env);

#endif /* _SHELL_H_ */
