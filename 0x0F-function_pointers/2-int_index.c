#include <stddef.h>

/**
 * int_index - search for an element in array
 * @array: inputs array
 * @size: size of array
 * @cmp: action to perform for each array
 *
 * Return: int
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
