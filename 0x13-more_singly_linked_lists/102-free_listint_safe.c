#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *temp;

	current = *h;

	while (current != NULL)
	{
		count++;
		temp = current;
		current = current->next;

		/* Check if we've visited this node before */
		if (temp < current)
		{
			free(temp);
		}
		else
		{
			*h = NULL;
			return (count);
		}
	}

	*h = NULL; /* Set head to NULL after freeing the list */
	return (count);
}

