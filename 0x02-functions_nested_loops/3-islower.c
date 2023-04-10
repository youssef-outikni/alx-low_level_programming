#include <stdio.h>

/**
 * _islower  - Entry point
 * @c: input value
 * Return: always 0 (Success)
 */

int _islower(int c)
{
	if (c > 122 && c < 97)
	{
		return (0);
	}
	return (1);
}
