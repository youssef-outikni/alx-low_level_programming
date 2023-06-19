#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - define a new structure.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: nothing
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
