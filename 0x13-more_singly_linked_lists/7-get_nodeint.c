#include "lists.h"

/**
 * get_nodeint_at_index - this returns the node at a certain index in a linked list
 * @head: this is first node in the linked list
 * @index: this is index of the node to return
 * Reurn: this is pointer to the node we are looking for or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *swap = head;

	while (swap && x < index)
	{
		swap = swap->next;
		x++;
	}

	return (swap ? swap : NULL);
}
