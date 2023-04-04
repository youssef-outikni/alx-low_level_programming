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
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
