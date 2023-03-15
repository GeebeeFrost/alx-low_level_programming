#ifndef MAIN
#define MAIN

int _putchar(char);
char *create_array(unsigned int, char);
char *_strdup(char *);
int strilen(char *);
char *str_concat(char *, char *);
int **alloc_grid(int, int);
void free_grid(int **, int);
char *argstostr(int, char **);

#endif
