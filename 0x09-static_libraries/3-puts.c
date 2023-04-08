#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s:input value
 *
 * Return: length of the string
 */

void _puts(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
}
