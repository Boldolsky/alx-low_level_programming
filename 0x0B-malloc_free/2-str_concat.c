#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings(s2 to s1)
 * @s1: first string input
 * @s2: second string input
 * Return: a pointer
*/
char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	new = malloc(sizeof(char) * (len1 + len2 + 1));
	if (new == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < len1)
		{
			new[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (len1 + len2))
		{
			new[i] = s2[j];
			i++;
			j++;
		}
	}
	new[i] = '\0';

	return (new);
}
