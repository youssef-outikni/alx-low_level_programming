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
	int i = 0;
	int *result;

	if (num < 1)
	{
		return (NULL);
	}
	result = (int *) malloc(num * sizeof(int));

	if (result == NULL)
	{
		return (NULL);
	}
	while (i < num)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
