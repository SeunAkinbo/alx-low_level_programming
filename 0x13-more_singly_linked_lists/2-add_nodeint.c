#include "lists.h"

/**
 * add_nodeint - Add node to the begining of the linked list
 * @head: Linked liat pointer
 * @n: Integer data of the new node
 * Return: Address pointer
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->next = *head;
	ptr->n = n;
	*head = ptr;

	return (ptr);
}
