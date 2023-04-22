#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sum of items
 * @n: items
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
