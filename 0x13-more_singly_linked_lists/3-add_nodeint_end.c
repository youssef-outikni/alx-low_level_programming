#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *item;
	listint_t *tp = *head;

	item = malloc(sizeof(lisint_t));
	if (!item)
	{
		return (NULL);
	}
	item->n = n;
	item->next = NULL;
	if (*head == NULL)
	{
		*head == item;
		return (item);
	}
	while (tp->next)
	{
		tp = tp->next;
	}
	tp->next = item;
	return (item);
}
