#include "lists.h"

/**
 * free_listint - A function that frees a linked list
 * @head: A pointer to the first node
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
