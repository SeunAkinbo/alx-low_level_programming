#include "lists.h"

/**
 * dlistint_len - Counts the number of nodes in a linked list
 * @h: The start node of a linked list
 * Return: The number of nodes in the linked list
 * Description: The function counts the number of nodes in a
 *		linked list and returns the number.
 **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
