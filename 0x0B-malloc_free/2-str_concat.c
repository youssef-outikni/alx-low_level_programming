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
 * str_concat -  concatinate 2 arrays.
 * @s1: input value
 * @s2: input value
 *
 * Return: char pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int size;
	char *text;
	int size1;
	int size2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = sizer(s1);
	size2 = sizer(s2);
	size = size1 + size2;
	text = (char *)malloc(size * sizeof(char) + 1);
	if (text == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		text[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		text[i] = s2[j];
		i++;
	}
	return (text);
}


