#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array -  creates an array.
 * @size: input value
 * @c: input value
 *
 * Return: char pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *text = (char *) malloc(size);

	if (text != NULL)
	{
		for (i = 0; i < size; i++)
		{
			text[i] = c;
		}
	}
	return (text);
}
