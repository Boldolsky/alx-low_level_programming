#include "main.h"
#include <stdio.h>


/**
 * print_binary - This prints the binary representation of a number.
 * @n: This is the number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int x;
	int y;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (x = n, y = 0; (x >>= 1) > 0; y++)
	;

	for (; y >= 0; y--)
	{
		if (n >> y & 1)
		{
			putchar('1');
		}
		else
			putchar('0');
	}
}

