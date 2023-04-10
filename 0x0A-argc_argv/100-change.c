#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - check the code
 * @argc: input value.
 * @argv: input value.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int cents = 0;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents)
	{
		if (cents > 25)
		{
			coins = coins +  cents / 25;
			cents = cents % 25;
		}
		else if (cents > 10)
		{
			coins = coins + cents / 10;
			cents = cents % 10;
		}
		else if (cents > 5)
		{
			coins = coins + cents / 5;
			cents = cents % 5;
		}
		else if ( cents > 2)
		{
			coins = coins + cents / 2;
			cents = cents % 2;
		}
		else
		{
			coins = coins + cents;
			cents = 0;
		}
	}
	printf("%d\n",coins);
	return (0);
}
