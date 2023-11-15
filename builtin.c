#include "main.h"
/**
 * buildin_command - function that buildin
 * @command: argument
 * Return: 0
 */

int buildin_command(char **command)
{
	char *dir;

	if (strcmp(command[0], "cd") == 0)
	{
		if (command[1] == NULL)
		{
			dir = getenv("HOME");
			if (dir == NULL)
			{
				perror("ERROR");
				return (1);
			}
		}
		else
			dir = command[1];

		if (chdir(dir) != 0)
		{
			perror("error");
			return (1);
		}
		return (1);

	}
	else if (strcmp(command[0], "exit") == 0)
	{
		exit(EXIT_SUCCESS);
		exit(0);
		return (1);
	}
	else
		return (0);
}
