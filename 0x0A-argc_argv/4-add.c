#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: input value.
 * @argv: input value.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i = 0;

	while (++i < argc)
	{
		int c = (int)*argv[i];

		if (c < 48 || c > 57)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
