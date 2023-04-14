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
 * string_nconcat -  concatinate 2 arrays.
 * @s1: input value
 * @s2: input value
 * @n: input value
 *
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int j;
	int size;
	char *text;
	int size1;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = sizer(s1);
	if ((unsigned int) sizer(s2) < n)
	{
		n = sizer(s2);
	}
	size = size1 + n;
	text = (char *)malloc(size * sizeof(char) + 1);
	if (text == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (i < size1)
	{
		text[i] = s1[i];
		i++;
	}
	while (i < size)
	{
		text[i++] = s2[j++];
	}
	return (text);
}

