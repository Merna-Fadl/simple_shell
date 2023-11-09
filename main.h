#ifndef MAIN_H
#define MAIN_H



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;
char *read_line(void);
void simple_shell(const char *massage);
char **tokenizer(char *line);
int execuate_shell(char **command, char **argv);

#endif
