#include "lists.h"

/**
 * add_nodeint - this adds a new node at the begining of a linked list
 * @head: this is pointer to the first node of the list
 * @n: data to be added as a props of the new code
 * Return: the adress of a new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;
	current = malloc(sizeof(listint_t));

	if (!current)
		return (NULL);

	current->n = n;
	current->next = *head;
	*head = current;

	return (current);
}
