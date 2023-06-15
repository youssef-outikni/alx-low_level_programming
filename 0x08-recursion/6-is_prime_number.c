#include "main.h"
/**
 * prime_helper - returns the prime
 * @n: input value
 * @counter: the counter of the is_prime_number function.
 *
 * Return: prime number.
 */

int prime_helper(int n, int counter)
{
	if (n % counter == 0)
	{
		return (0);
	}
	else if (counter > n / 2)
	{
		return (1);
	}
	else
	{
		return (prime_helper(n, ++counter));
	}
}

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: input value
 *
 * Return: 0 or 1.
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (prime_helper(n, 2));
}
