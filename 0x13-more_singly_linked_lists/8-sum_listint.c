#include "lists.h"

/**
 * sum_listint - Sums all data (n) of a linked list
 * @head: Linked list argument
 * Return: Sum of all the data (n) or 0 if list is NULL
 *
 **/


int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *holder;

	if (head == NULL)
		return (0);

	holder = head;

	while (holder != NULL)
	{
		sum += holder->n;
		holder = holder->next;
	}
	return (sum);
}

