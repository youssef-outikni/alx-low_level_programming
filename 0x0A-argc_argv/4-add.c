#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _isdigit - checks if a character is digit
 * @c: the character to check
 *
 * Return: 1 if the character is digit, 0 otherwise
 */

int _isdigit(char *c)
{
	while (*c != '\0')
	{
		int a;

		a = *c;
		if (a < 48 || a > 57)
		{
			return (0);
		}
		c++;
	}
	return (1);
}


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
		if (!_isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
