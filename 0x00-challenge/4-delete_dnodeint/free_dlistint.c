#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - empty a list
 *
 * @head: A pointer to the first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
