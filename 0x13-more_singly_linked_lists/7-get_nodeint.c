#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to list
 * @index: int index of the node
 * Return: head pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while ((count < index) && head != NULL)
	{
		head = head->next;
		count++;
	}

	return (head);
}

