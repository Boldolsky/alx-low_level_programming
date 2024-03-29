#include "function_pointers.h"

/**
 * int_index - a function that searches for an int
 * @array: takes the location of an array of int as input
 * @size: the size of the array
 * @cmp: the location of the function that compares the int
 * Return: returns an int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
