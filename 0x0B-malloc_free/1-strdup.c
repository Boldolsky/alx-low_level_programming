#include "main.h"
#include <string.h>

/**
 * _strdup - creates a memory a cp the content of str
 * @str: the location of str
 * Return: the location of a copy of str
*/

char *_strdup(char *str)
{
	char *s = str;

	if (s == NULL)
	{
		return (NULL);
	}
	return (strdup(str));
}

