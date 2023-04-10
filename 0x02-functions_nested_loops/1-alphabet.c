#include <stdio.h>

/**
 * print_alphabet - Entry point
 *
 * Return: nothing (Success)
 */

void print_alphabet(void)
{
	char text[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(text[i]);
	}
	putchar('\n');
}
