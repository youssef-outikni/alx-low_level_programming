#include "main.h"
#include <stddef.h>
/**
 * _strstr -  locates a substring
 * @haystack: input value
 * @needle: input value
 *
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	for (; haystack[i] != '\0'; i++)
	{
		int t = 0;

		if (haystack[i] == needle[t])
		{
			for (; needle[t] != '\0'; t++)
			{
				if (haystack[i + t] != needle[t])
				{
					break;
				}
			}
			if (needle[t] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
