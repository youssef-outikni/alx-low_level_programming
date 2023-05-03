#include "main.h"

/**
 * puts2 - returns the length of a string
 * @str:input value
 *
 * Return: length of the string
 */

void puts2(char *str)
{
	int stg = 0;
	int i = 0;
	int a;
	char *s = str;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	stg = i - 1;
	for (a = 0; a <= stg; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
