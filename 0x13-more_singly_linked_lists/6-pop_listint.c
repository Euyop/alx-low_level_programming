#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to list
 * Return: head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *traverse;
	int num;

	if (*head == NULL)
		return (0);

	traverse = *head;

	num = traverse->n;

	*head = traverse->next;

	free(traverse);
	traverse = NULL;

	return (num);
}

