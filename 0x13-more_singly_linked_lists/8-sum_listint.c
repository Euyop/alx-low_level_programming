#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - adds all the ints from each node
 * @head: pointer to list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

