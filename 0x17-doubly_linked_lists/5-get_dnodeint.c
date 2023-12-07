#include "lists.h"

/**
 * get_dnodeint_at_index - Checks for the node at index n
 * @head: Start node of the doubly linked list
 * @index: The nth index of a linked list
 * Return: The node at the index or NULL otherwise
 *
 * Description: Gets the node at an nth index and returns it
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	curr = head;
	while (curr && i < index)
	{
		curr = curr->next;
		i++;
	}
	return (curr);
}
