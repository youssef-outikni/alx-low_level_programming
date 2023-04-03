#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s:input value
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}

	return (c);
}
