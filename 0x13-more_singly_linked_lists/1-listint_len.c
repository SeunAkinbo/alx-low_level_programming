#include "lists.h"

/**
 * listint_len -  Computes the number of elements in the linked list
 * @h: Pointer to a linked list
 * Return: The number of elements in the linked list
 **/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}

