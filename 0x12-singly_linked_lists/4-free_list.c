#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - free the memory
 * @head: The address of the head of the linked list.
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
