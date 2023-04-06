#include "main.h"
/**
 * _pow_recursion - returns the factorial of a given number.
 * @x: input value
 * @y: input value
 *
 * Return: x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (y * _pow_recursion(x, y - 1));
}
