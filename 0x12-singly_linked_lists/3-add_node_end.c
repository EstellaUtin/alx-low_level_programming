#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -  Adds a new node at the end of a list_t list.
 * @head: Pointer 2 the list
 * @str: String 2 put in the new node
 * Return: Address of the new element otherwise NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[length])
		length++;

	new_node->str = strdup(str);
	new_node->len = length;
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}

	else
	{	new_node->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
