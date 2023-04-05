#include "lists.h"

/**
 *free_list - this frees a linked list
 *@head: listint_int list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *swap;

	while (head)
	{
		swap = head->next;
		free(head);
		head = swap;
	}
}
