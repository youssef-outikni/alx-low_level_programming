#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: input value
 * @src: input value
 * @n:input value
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest + strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		p[i] = src[i];
	}

	p[i] = '\0';
	return (dest);
}
