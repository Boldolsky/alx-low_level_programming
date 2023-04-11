#include "main.h"

/**
 * binary_to_uint - This Converts a binary number to an unsigned int.
 * @b: This is a pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 1;
	int len;

	if (*b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;
	
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		i += (b[len] - '0') *j;
		j *= 2;
	}

	return (i);
}
