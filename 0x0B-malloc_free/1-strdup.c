#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  creates an array.
 * @str: input value
 *
 * Return: char pointer
 */

char *_strdup(char *str)
{
	char *text;

	if (str == NULL)
	{
		return (NULL);
	}
	text = (char *) malloc(sizeof(str));
	if (text != NULL)
	{
		while (*str != '\0')
		{
			*text = *str;
			str++;
			text++;
		}
	}
	return (text);
}
