#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

char print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}


char print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
