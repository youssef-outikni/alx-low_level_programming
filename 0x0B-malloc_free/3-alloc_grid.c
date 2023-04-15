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
	int i = 0;
	int j = 0;
	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	result = malloc(width *  sizeof(int));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		result[i] = malloc(height * sizeof(int));
		if (result[i])
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			result[i][j] = 0;
		}
		j = 0;
	}
	return (result);
}


