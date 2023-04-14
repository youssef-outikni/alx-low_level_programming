#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc -  calculate size of c.
 * @nmemb: input value
 * @size: input value
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	result = (char *) malloc(nmemb * size);

	if (result == NULL)
	{
		return (NULL);
	}
	while (i < (nmemb * size))
	{
		result[i] = '\0';
		i++;
	}
	return (result);
}
