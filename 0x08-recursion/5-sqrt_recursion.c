#include "main.h"
/**
 * sqrt_helper - returns the root
 * @n: input value
 * @counter: the counter of the _sqrt_recursion function.
 *
 * Return: square root.
 */

int sqrt_helper(int n, int counter)
{
	if (counter * counter == n)
	{
		return (counter);
	}
	else if (counter * counter > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, ++counter));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input value
 *
 * Return: square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (sqrt_helper(n, 1));
	}
}
