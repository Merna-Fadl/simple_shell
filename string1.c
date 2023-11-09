#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(const char *str)
{
	int length = 0;
	int i;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (str[length])
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (i = 0; i <= length; i++)
		ret[i] = str[i];
	return (ret);
}





