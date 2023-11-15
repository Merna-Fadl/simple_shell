#include "main.h"

/**
 * handle_path - function that handle path
 * @str: path value
 * Return: nothing
 */

char *handle_path(char *str)
{
	int i;
	char *variable, *temp, *env, *line;

	for (i = 0; environ[i]; i++)
	{
		temp = _strdup(environ[i]);
		line = strtok(temp, "=");
		if (strcmp(line, str) == 0)
		{
			variable = strtok(NULL, "\n");
			env = _strdup(variable);
			free(temp);
			return (env);
		}
		free(temp);
		temp = NULL;
	}
	return (NULL);
}
