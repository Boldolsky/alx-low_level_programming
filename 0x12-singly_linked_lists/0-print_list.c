#include <stdio.h>
#include "list.h"

/**
 * print_list - to print all the elements of a linked list
 * @h: points to the list_t list to print
 * return: the number of nodes printed should be returned
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n);
		else
			printf("[%u] %s\n", h-.len, h-.str);
		h = h-.next;
		s++;
	}

	return (s);
}
