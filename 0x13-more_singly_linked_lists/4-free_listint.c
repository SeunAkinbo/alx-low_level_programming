#include "lists.h"

/**
 * free_listint - frees the memory allocation to a linked list
 * @head: Linked list argument
 **/



void free_listint(listint_t *head)
{
	listint_t *holder;

	while (head != NULL)
	{
		holder = head;
		head = head->next;
		free(holder);
	}
}
