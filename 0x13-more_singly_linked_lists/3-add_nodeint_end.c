#include "lists.h"

/**
 * add_nodeint_end - this adds a node to the begining of the linked list
 * @head: this is the begining of the node
 * @n: int to be added as props of the new node
 * Return: pointer to the new node or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *tmp = *head;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
	{
		return (NULL);
	}

	current->n = n;
	current->next = NULL;
	if (*head == NULL)
	{
		*head = current;
		return (current);
	}

	while (tmp->next)
		tmp =tmp->next;
	tmp->next = current;

	return (current);
}
