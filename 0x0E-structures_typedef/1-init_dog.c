#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize structure
 * @d: dog structure
 * @name: input value
 * @age: input value
 * @owner: input value
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
