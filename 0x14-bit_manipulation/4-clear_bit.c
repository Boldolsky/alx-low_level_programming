#include "main.h"

/**
 * clear_bit - this sets the value of a bit at a given index to 0.
 * @n: this is a pointer to the bit.
 * @index: this is the index to set the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index> 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
