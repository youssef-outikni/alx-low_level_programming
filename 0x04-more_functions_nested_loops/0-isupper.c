#include <stdio.h>
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (64 < c && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
