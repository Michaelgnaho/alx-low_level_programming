#include "lists.h"

/**
 * dlistint_len - this returns the number of elements in
 * a double linked list
 *
 * @h: this is the head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counts;

	counts = 0;

	if (h == NULL)
		return (counts);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		counts++;
		h = h->next;
	}

	return (counts);
}
