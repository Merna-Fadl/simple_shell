#include "main.h"

/**
 * read_line - function to read line
 *
 * Return: line
 */
char *read_line(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t n;

	if (isatty(STDIN_FILENO) == 1) /* interactive mood*/
	{
		simple_shell("EM_shell$ ");
	}

	n = getline(&line, &len, stdin);

	if (n == -1)
	{
		if (feof(stdin))
		{
			free(line);
			exit(0);
		}
		else
		{
			free(line);
			perror("error");
			exit(EXIT_FAILURE);
		}
	}
	return (line);
}
