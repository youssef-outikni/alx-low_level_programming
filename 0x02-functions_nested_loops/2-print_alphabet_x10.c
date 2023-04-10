#include <stdio.h>

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: nothing (Success)
 */

void print_alphabet_x10(void)
{
	char text[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			putchar(text[i]);
		}
		putchar('\n');
	}
}
