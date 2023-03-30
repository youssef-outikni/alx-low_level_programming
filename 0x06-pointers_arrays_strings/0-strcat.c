#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src) {
	char *dest_ptr = dest;
	
	while (*dest_ptr) {
	    dest_ptr++;
	}

	while (*src) {
	    *dest_ptr++ = *src++;
	}

	*dest_ptr = '\0';
	
	return dest;
}
