#include "lists.h"


/**
 * insert_dnodeint_at_index - Inserts node at an index in a doubly linked list
 * @h: The start of the linked list
 * @idx: The index at which to insert new node
 * @n: The value of the data to insert in the new node
 * Return: Returns the updated linked list on success, or NULL otherwise
 *
 * Description: The function inserts a new node at an index and returns
 *		updated list on success.
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr, *new;
	unsigned int i = 0;

	new = create_node(n);
	if (!new)
		return (NULL);

	if (!*h && idx != 0)
	{
		free(new);
		return (NULL);
	}

	curr = *h;
	while (curr && i < idx - 1)
	{
		curr = curr->next;
		i++;
	}

	if (!curr)
	{
		free(new);
		return (NULL);
	}

	new->prev = curr;
	new->next = curr->next;

	if (curr->next)
		curr->next->prev = new;
	curr->next = new;

	return (new);
}
