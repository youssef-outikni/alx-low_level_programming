#include "main.h"
/**
 * _strspn -  locates a character in a string
 * @s: input value
 * @accept: input value
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				i++;
			}
			accept++;
		}

		s++;
	}
	return (i);
}
