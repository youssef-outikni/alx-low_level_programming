#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			putchar(i);
			putchar(',');
			putchar(' ');
			putchar(j);
			j++;
		}

		i++;
	}

	return (0);
}
