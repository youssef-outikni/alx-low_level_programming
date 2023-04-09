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
		if (!_isdigit((int)*argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * _isdigit - checks if a character is digit
 * @c: the character to check
 *
 * Return: 1 if the character is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
