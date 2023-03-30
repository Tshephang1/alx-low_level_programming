#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list
 * @h: the list to be printed
 * Return: number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", (h->str == NULL ? 0 : h->len),
				 (h->str == NULL ? "(nil)" : h->str));
		h = h->next;
		count++;
	}
	return (count);
}
