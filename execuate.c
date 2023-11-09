#include "main.h"
/**
 * execuate_shell - function to execute
 * @command: massage to execuate
 * @argv: argument
 * Return: 0
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

	else if (pid == 0)
	{
		if (execve(command[0], command, environ) == -1)
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
			command = NULL;
			free(argv);
			argv = NULL;
			exit(EXIT_SUCCESS);
	}
	else
	{
		wait(NULL);
	}
		return (i);
	
}
