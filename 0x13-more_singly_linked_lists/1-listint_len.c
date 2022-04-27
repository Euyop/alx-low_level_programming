#include <stdio.h>
#include "lists.h"

/**
 * listint_len - finds number of elements in a linked listint_t list
 * @h: pointer to list
 * Return: size_t count.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

