#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees list
 * @head: pointer to list
 */

void free_listint(listint_t *head)
{
	listint_t *traverse;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		traverse = head;
		head = head->next;
		free(traverse);
	}
}

