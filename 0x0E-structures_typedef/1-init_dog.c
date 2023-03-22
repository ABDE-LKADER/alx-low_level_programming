#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog structure
 *
 * @d: A dog structure.
 * @name: The Name
 * @age: The Age
 * @owner: The Owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
