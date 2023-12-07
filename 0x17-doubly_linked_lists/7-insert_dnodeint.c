#include "lists.h"

/**
 * creates_node - Creates a new node
 * @n: The value of the node integer variable
 * Return: A new node on success or NULL otherwise
 *
 * Description: The function  creates a new node, assigns
 *		a value to the integer variable and returns
 *		the new node
 **/


dlistint_t *creates_nodes(const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	return (new);
}


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
	dlistint_t *curr, *new = NULL;
	unsigned int i = 0;

	if (!*h)
		return (new);

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	curr = *h;
	while (curr && i < idx - 1)
	{
		curr = curr->next;
		i++;
	}

	if (!curr)
		new = add_dnodeint_end(h, n);
	else
	{
		new = creates_nodes(n);
		if (!new)
			return (NULL);

		new->prev = curr;
		new->next = curr->next;

		if (curr->next)
			curr->next->prev = new;
		curr->next = new;
	}

	return (new);
}
