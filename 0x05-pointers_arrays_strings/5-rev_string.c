#include "main.h"

/**
 * rev_string - returns the length of a string
 * @s:input value
 *
 * Return: length of the string
 */

void rev_string(char *s)
{
	char stg = s[0];
	int i = 0;
	int a;

	while (s[i] != '\0')
	{
		i++;
	}
	for (a = 0; a < i 0; a++)
	{
		i--;
		stg = s[a];
		s[a] = s[i];
		s[i] = stg;
	}
}
