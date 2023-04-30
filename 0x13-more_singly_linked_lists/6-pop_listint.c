#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * @head: a point to the listint_t
 * Return: the head node's data from deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (n);
}
