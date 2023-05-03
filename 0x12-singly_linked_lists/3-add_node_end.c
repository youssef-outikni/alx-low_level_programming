#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *item;
	list_t *tp = *head;
	unsigned int l = 0;

	while (str[l])
	{
		l++;
	}
	item = malloc(sizeof(list_t));
	if (!item)
	{
		return (NULL);
	}
	item->str = strdup(str);
	item->len = l;
	item->next = NULL;

	if (*head == NULL)
	{
		*head = item;
		return (item);
	}
	while (tp->next)
	{
		tp = tp->next;
	}
	tp->next = item;

	return (item);
}

