#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list_t list
 * @head: double pointer to list
 * @n: int
 * Return: list_t pointer.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *traverse, *new_node;

	traverse = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (traverse->next != NULL)
		{
			traverse = traverse->next;
		}
		traverse->next = new_node;
	}

	return (*head);
}

