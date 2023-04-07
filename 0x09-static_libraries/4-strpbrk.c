#include "main.h"
#include <stddef.h>
/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s: input value
 * @accept: input value
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	char *a_init = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return ((char *)s);
			}
			accept++;
		}
		accept = a_init;
		s++;
	}
	return (NULL);
}
