#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print the strings passed to it and
 * separator after each string
 * @separator: separator between the numbers
 * @n: the number of arguments of type unsigned int passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *x;
	unsigned int i;

	if (n == 0)
		return;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char *);
		if (!x)
			x = "(nil)";
		if (!separator)
			printf("%s", x);
		else if (separator && i == 0)
			printf("%s", x);
		else
			printf("%s%s", separator, x);
	}
	printf("\n");
	va_end(args);
}

