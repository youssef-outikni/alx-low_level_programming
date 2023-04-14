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
	int i, j, size1 = sizer(s1), size2 = sizer(s2);
	char *text;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if ((unsigned int) sizer(s2) <= n)
	{
		n = size2;
	}
	text = (char *)malloc(size1 * sizeof(char) * n + 1);
	if (text == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		text[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		text[i++] = s2[j++];
	}
	return (text);
}


