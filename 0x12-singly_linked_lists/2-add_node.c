#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node at the end of a list_t list.
 * @head: The pointer to the head of the linked list.
 * @str: The string to be added to the new node.
 * Return: The head of the linked list, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int len = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	len = strlen(str);

	newNode->len = len;
	newNode->str = strdup(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
