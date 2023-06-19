#include <stdio.h>
#include "dog.h"

/**
 * new_dog - create new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;

	dg = (struct dog *)malloc(sizeof(struct dog));
	if (dg)
	{
		dg->name = name;
		dg->age = age;
		dg->owner = owner;
		return (dg);
	}
	return (NULL);
}
