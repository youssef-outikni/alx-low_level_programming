#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range -  calculate size of c.
 * @min: input value
 * @max: input value
 *
 * Return: int
 */

int *array_range(int min, int max)
{
	int num = 1 + max - min;

	if (num < 1)
	{
		return (NULL);
	}
	result = (int *) malloc(num * sizeof(int));

	if (result == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		result[i] = min;
		min++;
	}
	return (result);
}
