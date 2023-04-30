#include "lists.h"
#include <string.h>

/**
 * add_nodeint - a function that adds a new node at the beginning of the list
 * @head: first node point to list
 * @n: An integer to store new node
 * Return: the address of the new element, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}
