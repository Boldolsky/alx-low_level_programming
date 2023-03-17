#include "main.h"
#include <stdlib.h>

/**
 * _realloc - change the size of a memory
 * @old_size: input the old size of the array
 * @new_size: input new size of the array
 * @ptr: the address of the array to be resized
 * Return: void
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
	{
		return (ptr);
	}
	else
	{
		ptr = realloc(ptr, new_size);
	}
	return (ptr);
}
