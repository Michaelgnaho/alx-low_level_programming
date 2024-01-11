#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning
 * of a dlistint_t list
 *
 * @head: the head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newn;
	dlistint_t *h;

	newn = malloc(sizeof(dlistint_t));
	if (newn == NULL)
		return (NULL);

	newn->n = n;
	newn->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	newn->next = h;

	if (h != NULL)
		h->prev = newn;

	*head = newn;

	return (newn);
}
