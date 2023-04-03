#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: input value
 * @b: input value
 * @n: imput value
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}

	return (s);
}
