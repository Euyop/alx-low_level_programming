#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to list
 * @index: index position
 * Return: list pointer
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *traverse, *node;
	unsigned int count = 0;

	traverse = *head;
	node = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = traverse->next;
		free(traverse);
		return (1);
	}
	index--;
	while (count < index && traverse != NULL)
	{
		traverse = traverse->next;
		count++;
	}
	if (traverse == NULL || traverse->next == NULL)
		return (-1);

	node = traverse->next->next;
	free(traverse->next);
	traverse->next = node;

	return (1);
}

