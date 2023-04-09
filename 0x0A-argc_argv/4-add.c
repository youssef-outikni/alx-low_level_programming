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
		if (atoi(argv[argc]) == 0)
		{
			printf("Error\n");
			return (0);
		}
		sum = sum + atoi(argv[argc]);
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
