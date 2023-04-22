#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result.
 * @argc: the number of arguments
 * @argv: an array of arguments
 *
 * Return: always 0.
 */

int  main(int argc, char *argv[])
{
	int a, b;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];
	if (get_op_func(s) == NULL || s[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*s == '/' || *s == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(s)(a, b));
	return (0);
}

