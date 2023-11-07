#include "main.h"

/**
 * tokenizer - function that separate element from original string
 * @line: string to be separated
 * Return: pointer
 */
char **tokenizer(char *line)
{
	int count = 0;
	char *token;
	char **command;

	if (!line)
	{
		perror("ERROR");
		exit(EXIT_FAILURE);
	}
	token = strtok(strdup(line), " \n");
	command = malloc(sizeof(char *) * (count + 1));

	if (!command)
	{
		free(line);
		return (NULL);
	}

	for (count = 0; token; count++)
	{
		command[count] = token;
		token = strtok(NULL, " \n");
	}
	free(line);
	return (command);
}
