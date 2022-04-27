#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - Print any type of linked list.
 * @head: Points to the linked list.
 * Return: Number of nodes of the linked list, 98 on failure.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	const listint_t *new_head = NULL, *tail = NULL;

	new_head = head;
	while (new_head)
	{
		num_nodes++;

		tail = new_head;
		printf("[%p] %d\n", (void *)new_head, new_head->n);
		new_head = new_head->next;

		if (tail < new_head)
		{
			printf("-> [%p] %d\n", (void *)new_head, new_head->n);
			break;
		}
		if (tail == tail->next)
		{
			printf("-> [%p] %d\n", (void *)new_head, new_head->n);
			break;
		}

	}
	return (num_nodes);
}

