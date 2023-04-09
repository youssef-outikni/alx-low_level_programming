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


	while (1 - argc--)
	{
		int c = (int)*argv[argc];

		if (c < 48 || c > 57)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
