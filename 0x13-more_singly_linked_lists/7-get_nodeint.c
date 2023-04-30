#include "lists.h"

/**
 * get_nodeint_at_index - function to return the nth node of the listint_t
 * @head: A pointer to the listint_t structure
 * @index: index of node starting at 0
 * Return: the nth node or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
