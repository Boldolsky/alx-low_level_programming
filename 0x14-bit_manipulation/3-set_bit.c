#include "main.h"

/**
 *  set_bit - This sets the value of a bit at a given index to 1.
 * @n: this is a pointer to the bit.
 * @index: This is the index to set the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
