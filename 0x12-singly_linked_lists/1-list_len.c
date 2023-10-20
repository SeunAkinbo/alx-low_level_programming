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
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
