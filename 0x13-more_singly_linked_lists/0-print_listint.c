#include "lists.h"

/**
 * print_lists - this prints the elements of a linked list
 * @h: this is a linked list of type listint_t to print
 * Return: retursn the number of nodes in h
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}
