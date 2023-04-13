#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: input value
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *output = malloc(b);

	return (output);
}

