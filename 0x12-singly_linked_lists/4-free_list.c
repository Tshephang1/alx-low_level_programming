#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free all elements of our singly linked list
 * @head: pointer to first element of the list
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
