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

	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

/**
 * _strdup -  creates an array.
 * @str: input value
 *
 * Return: char pointer
 */

char *_strdup(char *str)
{
	int size = sizer(str) * sizeof(char);
	char *text = (char *)malloc(size);
	int i;

	if (str == NULL && text == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size  + 1; i++)
	{
		text[i] = str[i];
	}
	return (text);
}


