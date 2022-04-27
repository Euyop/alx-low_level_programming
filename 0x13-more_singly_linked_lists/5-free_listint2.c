#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: pointer to list
 */

void free_listint2(listint_t **head)
{
	listint_t *traverse;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		traverse = *head;
		*head = traverse->next;
		free(traverse);
	}
}

