#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - rm node at a specifics index from a list
 *
 * @head: A double pointer to the first node
 * @index: The index of the node to rm
 *
 * Return: 1 on successful, else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *saved_head;
	dlistint_t *tmp;
	unsigned int q;

	if (*head == NULL)
	{
		return (-1);
	}
	saved_head = *head;
	q = 0;
	while (q < index && *head != NULL)
	{
		*head = (*head)->next;
		q++;
	}
	if (q != index)
	{
		*head = saved_head;
		return (-1);
	}
	if (0 == index)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		if (tmp != NULL)
		{
			tmp->prev = NULL;
		}
	}
	else
	{
		(*head)->prev->next = (*head)->next;
		free(*head);
		if ((*head)->next)
			(*head)->next->prev = (*head)->prev;
		*head = saved_head;
	}
	return (1);
}
