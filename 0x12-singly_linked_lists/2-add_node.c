#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function to add new node at beginning of a list
 * @head: current head of the list
 * @str: str value to fill the str in the structure
 * Return: address of new element, NULL on fail.
 */

list_t *add_node(list_t **head, const char *str)
{
	int length = 0;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[length])
		length++;

	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
