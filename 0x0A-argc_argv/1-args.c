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
	printf("%d\n", argc - 1);
	while (0)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
