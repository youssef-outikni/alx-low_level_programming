#include "main.h"
/**
 * _strspn -  locates a character in a string
 * @s: input value
 * @accept: input value
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *a_init = accept;
	unsigned int m; 
	while (*s != '\0')
	{
		m = i;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				i++;
			}
			accept++;
		}
		if(m==i)
		{
			return (i);
		}
		
		accept = a_init;
		s++;
	}
	return (i);
}
