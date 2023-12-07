#include "lists.h"

/**
 * sum_dlistint - Sums all the data of a doubly linked list
 * @head: The start node of a doubly linked list
 * Return: The sum of the data (n) in the doubly linked list, 0 if empty
 *
 * Description: The function sums the data of a doubly linked list and
 *		returns the total or 0 if the list is empty.
 **/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr;
	int total = 0;

	if (!head)
		return (0);

	curr = head;
	while (curr)
	{
		total = total + curr->n;
		curr = curr->next;
	}
	
	return (total);
}
