#include "lists.h"

/**
 * sum_listint - function that adds a new node
 * at the beginning of a listint_t list
 * @head: pointer to the first node
 * Return: The sum of all the data n
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
