#include "lists.h"

/**
 * list_len - function to return number of elements in linked list
 * @h: the linked list
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
