#include "lists.h"

/**
 * free_dlistint - Free memory allocated to each node in a doubly linked list
 * @head: Start node of a doubly linked list
 * Return: void
 *
 * Description: A function that frees memory allocated to
 *		each node in a linked list
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr, *next;

	curr = head;
	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
