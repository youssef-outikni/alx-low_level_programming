#include <stdio.h>
#include "main.h"

/**
 * _abs - checks if a character is digit
 * @n: the character to check
 *
 * Return: 1 if the character is digit, 0 otherwise
 */

int _abs(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
