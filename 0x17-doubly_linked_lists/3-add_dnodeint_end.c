#include "lists.h"

/**
 * creates_node - Creates a new node
 * @n: The value of the node integer variable
 * Return: A new node on success or NULL otherwise
 *
 * Description: The function  creates a new node, assigns
 *		a value to the integer variable and returns
 *		the new node
 **/


dlistint_t *creates_node(const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	return (new);
}

/**
 * add_dnodeint_end - Add a node to the end of a doubly linked list
 * @head: The start of the doubly linked list node
 * @n: The value of the integer variable in the new node
 * Return: The new node on success or NULL otherwise
 * Description: A function that inserts a
 *		node at the end of doubly linked list
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *curr;

	new = creates_node(n);
	if (!new)
		return (NULL);

	if (!*head)
	{
		*head = new;
		return (new);
	}

	curr = *head;
	while (curr->next)
		curr = curr->next;

	curr->next = new;
	new->prev = curr;

	return (new);
}
