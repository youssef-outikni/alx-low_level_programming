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
	int prod = 1;

	if (argc != 3)
	{
		printf("Error");
		return (0);
	}
	while (1 - argc--)
	{
		prod = prod * atoi(argv[argc]);
	}
	printf("%d", prod);
	printf("\n");
	return (0);
}
