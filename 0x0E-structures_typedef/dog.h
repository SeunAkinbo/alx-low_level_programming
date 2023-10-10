#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Type definition dog
 * @name: String name of the dog
 * @age: Float age of the dog
 * @owner: String owner name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
