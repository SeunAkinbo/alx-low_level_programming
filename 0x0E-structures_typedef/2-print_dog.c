#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - Prints a struct dog
 * @d: A pointer to struct dog
 *
 * Return: Always NULL
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		printf("(nil)");
	else
		printf("Owner: %s\n", d->owner);
}
