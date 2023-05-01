
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: double pointer to  list
 * @str: new string to add
 *
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *s;
	unsigned int l = 0;

	while (str[l])
	{
		l++;
	}
	s = malloc(sizeof(list_t));
	if (!s)
	{
		return (NULL);
	}
	s->str = strdup(str);
	s->len = l;
	s->next = (*head);
	(*head) = s;
	return (*head);
}


