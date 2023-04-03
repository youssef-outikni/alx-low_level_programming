#include "main.h"
#include <stddef.h>
/**
 * _strchr -  locates a character in a string
 * @s: input value
 * @c: input value
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
