#include "lists.h"

/**
 * pop_int - this deletes the head nodes of a linked list
 * @head: this is pointer to the first element in the linked list
 * Return: data inside the elements that was deleted or 0 if the list is empty
 */
 
int poip_listint(listint_t **head)
{
	listint_t *swap;
	int x;

	if (head == NULL || *head == NULL)
		return (0);

	x = (*head)->n;
	swap = (*head)->next;
	free(*head);
	*head = swap;

	return (x);
}
