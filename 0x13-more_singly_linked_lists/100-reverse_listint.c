#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to list
 * Return: list pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *after = NULL;

	if (*head == NULL)
		return (NULL);

	while ((*head) != NULL)
	{
		after = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = after;
	}
	(*head) = prev;

	return (*head);
}

