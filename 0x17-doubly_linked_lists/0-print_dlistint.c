#include "lists.h"

/**
 * print_dlistint - Prints the elements of a doubly linked list
 * @h: The head node of the linked list
 * Return: The number of nodes in the linked list
 *
 * Description: The function prints the values of each node
 *              in the doubly linked list and returns the
 *              number of nodes in the linked list
 **/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;


	while (h)
	{
		printf("%d\n", h->n);
		h  = h->next;
		i++;
	}
	return (i);
}
