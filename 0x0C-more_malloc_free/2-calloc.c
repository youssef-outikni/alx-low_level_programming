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
	int i = 0;
	void *text
	if (nmemb == 0 && size == 0)
	{
		return (NULL);
	}
	text =  malloc(nmemb * size);
	while (i < nmemb * size)
	{
		text[i] = '\0';
		i++;
	}
}


