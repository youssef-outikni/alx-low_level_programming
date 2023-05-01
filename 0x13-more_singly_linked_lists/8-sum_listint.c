#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *tp = head;

	while (tp)
	{
		s = s + tp->n;
		tp = tp->next;
	}
	return (s);
}