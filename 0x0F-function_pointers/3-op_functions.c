#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - return the sum
 * @a: first input.
 * @b: second input.
 *
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return the diffrence
 * @a: first input.
 * @b: second input.
 *
 * Return: the diffrence of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - return the multiplication
 * @a: first input.
 * @b: second input.
 *
 * Return: the multiplication of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - return the division
 * @a: first input.
 * @b: second input.
 *
 * Return: the division of a by b.
 */
int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	return (-1);
}
/**
 * op_mod - return the rest
 * @a: first input.
 * @b: second input.
 *
 * Return: the rest of a/b.
 */
int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	return (-1);
}
