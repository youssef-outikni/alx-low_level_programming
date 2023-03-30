#include "main.h"
/**
 * _reverse_array - reverse an array.
 * @a: input value
 * @n: input value
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}

}
