#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at an index
 * @head: Start address of the list
 * @index: Index to the node
 *
 * Return: 1 for success and -1 for fail
 **/


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	curr = *head;
	if (index == 0)
	{
		*head = curr->next;
		if (*head)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}

	while (curr && i < index)
	{
		curr = curr->next;
		i++;
	}

	if (!curr)
		return (-1);

	if (curr->prev)
		curr->prev->next = curr->next;

	if (curr->next)
		curr->next->prev = curr->prev;

	free(curr);
	return (1);
}
