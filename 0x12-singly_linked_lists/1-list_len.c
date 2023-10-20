#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_len - Counts the number of elements in a linked list_t list.
 * @h: The head of the linked list.
 * Return: The number of elements.
 */

size_t list_len(const list_t *h)
{
	unsigned int count;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
