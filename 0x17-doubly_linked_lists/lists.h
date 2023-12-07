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


#endif
