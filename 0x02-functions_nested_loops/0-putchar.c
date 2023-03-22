#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar";

	for (int i = 0; i<9; i++)
	{
		putchar(text[i]);
	}

	putchar('\n');

	return (0);
}
