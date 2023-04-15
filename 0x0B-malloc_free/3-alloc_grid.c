#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * sizer -  calculate size of c.
 * @str: input value
 *
 * Return: int
 */

int sizer(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

/**
 * alloc_grid -  concatinate 2 arrays.
 * @width: input value
 * @height: input value
 *
 * Return: char pointer
 */

int **alloc_grid(int width, int height)
{	int **result;
	int i;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	result = (int *)malloc(width * height  * sizeof(int) + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (width * height); i++)
	{
		result[i] = 0;
	}
	return (result);
}


