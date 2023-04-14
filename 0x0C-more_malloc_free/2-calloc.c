#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc -  calculate size of c.
 * @memb: input value
 * @size: input value
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 && size == 0)
	{
		return (NULL);
	}
	return malloc(nmemb * size);
}


