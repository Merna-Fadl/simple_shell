#include "main.h"
/**
 * execuate_shell - function that exeuate program
 * @command: command to exeuate
 * @argv: argument
 * Return: nothing
 */
int execuate_shell(char **command, char **argv)
{
	pid_t pid;
	int i = 0;

	pid = fork();
	if (pid == -1)
	{
		perror("ERROR");
		exit(EXIT_FAILURE);
	}
	if (pid == 0)
	{
		if (command == NULL || argv == NULL)
		{
			perror("command or argv is NULL");
			exit(EXIT_FAILURE);
		}
		if (buildin_command(command) == 1)
		{
			exit(EXIT_SUCCESS);
		}
		if (execve(command[0],  command, environ) == -1)
		{
			perror(argv[0]);
			exit(EXIT_FAILURE);
		}
		for (i = 0; command[i]; i++)
		{
			simple_shell(command[i]);
			simple_shell("\n");
		}
		free(command);
		free(argv);
		exit(EXIT_SUCCESS);
	}
	else
	{
		wait(NULL);
	}
		return (WEXITSTATUS(i));
}
