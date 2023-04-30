#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index of a listint_t linked list
 * @index: position of node to be deleted
 * @head: pointer to the first node on the listint_t
 * Return: 1 otherwise -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *delnode;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			i++;
		}
		delnode = temp;
		delnode = delnode->next;
		temp->next = delnode->next;
		free(delnode);
	}
	return (1);
}
