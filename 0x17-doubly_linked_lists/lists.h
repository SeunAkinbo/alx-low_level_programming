#ifndef LISTS_H
#define LISTS_H

/*Standard Libraries*/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*Struct Definition*/

typedef struct dlistint
{
	int n;
	struct dlistint *next;
	struct dlistint *prev;
}dlistint_t;


/*Functions*/
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *create_node(const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);

#endif
