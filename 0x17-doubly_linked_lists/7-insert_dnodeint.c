#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts node at an index in a doubly linked list
 * @h: The start of the linked list
 * @idx: The index at which to insert new node
 * @n: The value of the data to insert in the new node
 * Return: Returns the updated linked list on success, or NULL otherwise
 *
 * Description: The function inserts a new node at an index and returns
 *              updated list on success.
 **/


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL;
	dlistint_t *newnode = NULL;
	unsigned int i = 0, count = 0;

	temp = *h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	if (idx > count)
		return (NULL);
	else if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	newnode = create_node(n);
	if (newnode == NULL)
		return (NULL);
	newnode->prev = temp;
	newnode->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = newnode;
	temp->next = newnode;

	return (newnode);
}
