#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at index
 * @head: pointer to list
 * @idx: index position
 * @n: int
 * Return: list pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *traverse, *new_node;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	traverse = *head;

	idx--;
	while (count < idx)
	{
		traverse = traverse->next;
		count++;
		if (traverse == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}

	new_node->next = traverse->next;
	traverse->next = new_node;

	return (new_node);
}

