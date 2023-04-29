#include "lists.h"
#include <stdio.h>

/**
 * listint - function that returns count of elements on list
 * @h: pointer to listint_t struct
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
