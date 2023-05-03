#include "main.h"

/**
 * _puts - returns the length of a string
 * @str:input value
 *
 * Return: length of the string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
