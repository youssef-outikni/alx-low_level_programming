#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

#include <unistd.h>

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



int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);

#endif /* MAIN_H */
