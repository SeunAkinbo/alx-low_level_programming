#include "lists.h"

/**
 * create_node - Creates a new node
 * @n: The value of the node integer variable
 * Return: A new node on success or NULL otherwise
 *
 * Description: The function  creates a new node, assigns
 *		a value to the integer variable and returns
 *		the new node
 **/


dlistint_t *create_node(const int n)
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
 * add_dnodeint - Adds a node to the begining of a doubly linked list
 * @head: The start node of the list
 * @n: The integer variable to be assigned to the new node
 * Return: The updated doubly linked list on success or NULL otherwise
 *
 * Description: The function creates a function and adds a value to the
 *		variable and returns it on success or it returns NULL
 *		on failure
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = create_node(n);
	if (!new_node)
		return (NULL);

	new_node->next = *head;
	if (*head)
		(*head)->prev = new_node;

	*head = new_node;
	
	return (new_node);
}
