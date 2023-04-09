#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @argc: input value.
 * @argv: input value.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", *argv[0] * *argv[1]);
	return (0);
}
