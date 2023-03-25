#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - select the corresponding function for each ops
 * @s: is the opertor
 * Return: int
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"/", op_div},
		{"%", op_mod},
		{"*", op_mul},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
