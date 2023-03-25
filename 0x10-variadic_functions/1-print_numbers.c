#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print thhe nunbers passed to it and
 * seraratior after each number
 * @separator: separator between the numbers
 * @n: the number of arguments of type unsigned int passed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	if (n == 0)
		return;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		if (!separator)
			printf("%d", x);
		else if (separator && i == 0)
			printf("%d", x);
		else
			printf("%s%d", separator, x);
	}

	printf("\n");
	va_end(args);
}

