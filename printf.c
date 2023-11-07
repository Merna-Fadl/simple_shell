#include "main.h"
/**
 * simple_shell - function that printed output
 * @massage: the line we need to printed
 * return: 0
 */

void simple_shell(const char *massage)
{
	int len = strlen(massage);

	write(STDOUT_FILENO, massage, len);
}
