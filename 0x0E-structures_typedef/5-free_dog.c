#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Free the memory
 * @d: Pointer to the dog_t
 * Return: Void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
