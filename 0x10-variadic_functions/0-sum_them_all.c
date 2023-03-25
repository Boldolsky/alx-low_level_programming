#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum if all its args
 * @n: number of arguments passed to the function
 * Return: sum of all its args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0, j;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (j = 0; j < (int) n; j++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
