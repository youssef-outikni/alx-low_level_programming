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
	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
}
