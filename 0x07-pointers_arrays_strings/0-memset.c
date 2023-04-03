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
	int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return (s);
}
