#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <unistd.h>

#define EXIT -3
#define END_OF_FILE -2

/* Global environement */
extern char **environ;
/* Global program name */
char *name;
/* Global history counter */
int hist;

/**
 * struct list_s - A new tybe for defending
 * @dir: A directory path.
 * @next: A pointer to list_s
 */
typedef struct list_s
{
    char *dir;
    struct list_s *next;
} list_t;

/**
 * struct builtin_s - new type for defending command
 * @name: name of command
 * @o: pointer for builtin command
 */
typedef struct builtin_s
{
    char *name;
    int (*o)(char **argv,char **front);
} builtin_t;

/**
 * struct alias_s - new defender
 * @name: name of alias
 * @value: value of alias
 * @next: pointer struct alias-s
 */
typedef struct alias_s
{
    char *name;
    char *value;
    struct alias_s *next;
}alias_t;
/* Global aliases linked list */
alias_t *aliases;

/* Main Helpers */
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char **_strlok(char *line, char *delim);
char *get_location(char *command);
list_t *get_path_dir(char *path);
int execute(char **args, char **front);
void free_list(list_t *head);
char *_itoa(int num);

/* Input Helpers */
void handle_line(char **line, ssize_t read);
void variable_replacment(char **args,int *exe_ret);
char *get_args(char *line, int *exe_ret);
int call_args(char **args, char **front, int *exe_ret);
int run_args(char **args, char **front,int *exe_ret);
int handle_args(int *exe_ret);
int check_args(char **args);
void free_args(char **args,char **front);
char **replace_aliases(char **args);

/* String functions */
int _strlen(const char *s);
char *stract(char *dest, const char *src);
char *_strcpy(char *dest, const char *src, size_t n);
char *_strcpy(char *dest, const char *src):
char *strchr(char *s, char c);
int _strspn(char *s, char c);
int _strspn(char *s, char *accept);
int _strcmp(char *s1, char *s2);
int _strncmp(const char *s1, const char *s2, size_t n);

/* Builtins */
int (*get_builtin(char *command))(char **args,char **front);
int shellby_exit(char **args, char **front);
int shellby_env(char **args,char __attribute__((__unused__)) **front);
int shellby_setenv(char **args,char __attribute__((__unused__)) **front);
int shellby_unsetenv(char **args,char __attribute__((__unused__))**front);
int shellby_cd(char **args, char __attribute__((__unused__)) **front);
int shellby _alias(char **args, char __attribute__((__unused__)) **front);
int shellby_help(char **args, char __attribute__((__unused__)) **front);

/* Builtin Helpers */
char **_copyenv(void);
void free_env(void);
char **_getenv(const char *var);

/* Error Handling */
int create_erroe(char **args, int err);
char *error_env(char **args);
char *error_1(char **args);
char *erroe_2_exit(char **args);
char *error_2_cd(char **args);
char *erroe_2_syntax(char **args);
char *error_126(char **args);
char *error_127(char **args);

/* Linkedlist Helpers */
alias_t *add_alias_end(alias_t **head,char *name, char *value);
void free_alias_list(alias_t *head);
list_t *add_node_end(list_t **head,char *dir);
void free_list(list_t *head);

void help_all(void);
void help_alias(void);
void help_cd(void);
void help_exit(void);
void help_help(void);
void help_env(void);
void help_setenv(void);
void help_unsetenv(void);
void help_history(void);

int proc_file_commands(char *file_path,int *exe_ret);
#endif


