#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters[] = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		putchar(letters[i]);
		i++;
	}

	putchar('\n');

	return (0);
}
