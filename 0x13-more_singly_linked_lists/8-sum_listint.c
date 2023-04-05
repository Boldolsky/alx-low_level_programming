#include "lists.h"

/**
 * sum_listint - this calculates the sum of all data in a linked list
 * @head: this is first node in the linked
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *swap = head;

	while (swap)
	{
		sum += swap->n;
		swap = swap->next;
	}

	return (sum);
}
