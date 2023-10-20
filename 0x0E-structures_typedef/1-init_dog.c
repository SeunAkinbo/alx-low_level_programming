#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes type struct dog
 * @d: Pointer to the struct dog
 * @name: String Name of the dog
 * @age: Float Age of the dog
 * @owner: String owner of the dog
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
