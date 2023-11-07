#include "main.h"

/**
 * main - function tha check shell
 * @argv: argument
 * @ac: accument
 * Return: 0
 */
int main(int ac, char **argv)
{
	char *line;
	char **command;
	int status;
	(void) ac;

	for ( ; 1; )
	{
		line = read_line();
		if (line == NULL)
		{
			return (status);
		}

		command = tokenizer(line);

		if (!command)
			continue;

	       status = execuate_shell(command, argv);


	}
}
