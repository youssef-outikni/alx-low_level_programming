#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	while (head)
	{
		list_t *tp;
		tp = head->next;
		free(head->str);
		free(head);
		head = tp;
	}
}

