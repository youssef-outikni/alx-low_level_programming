#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks if a character is digit
 * @c: the character to check
 *
 * Return: 1 if the character is digit, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
