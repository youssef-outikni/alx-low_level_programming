#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 25; i++)
	{
		putchar(text[i]);
	}

	putchar('\n');

	return (0);
}
