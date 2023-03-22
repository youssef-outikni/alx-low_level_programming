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


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
