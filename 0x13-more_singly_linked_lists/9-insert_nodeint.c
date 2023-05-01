#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *item;
	listint_t *tp = *head;

	item = malloc(sizeof(listint_t));
	if (!item || !head)
	{
		return (NULL);
	}
	item->n = n;
	item->next = NULL;
	if (idx == 0)
	{
		item->next = *head;
		*head = item;
		return (item);
	}
	for (x = 0; tp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			item->next = tp->next;
			tp->next = item;
			return (item);
		}
		else
		{
			tp = tp->next;
		}
	}
	return (NULL);
}

