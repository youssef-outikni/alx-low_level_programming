#include <stddef.h>

/**
 * array_iterator - prints array
 * @array: inputs array
 * @size: size of array
 * @action: action to perform for each array
 *
 * Return: nothing
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
