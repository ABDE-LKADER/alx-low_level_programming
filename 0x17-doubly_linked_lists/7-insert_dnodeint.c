#include "lists.h"

/**
 * insert_dnodeint_at_index -> Inserts a new node at a given position
 * @h: Head List
 * @idx: Index Node
 * @n: Add Number
 * Return: New Node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *a, *b, *new;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	a = *h;
	for (i = 0; i < idx - 1; i++)
	{
		if (a == NULL)
			return (NULL);
		a = a->next;
	}
	if (a == NULL)
		return (NULL);
	if (a->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	b = a->next;
	a->next = new;
	new->prev = a;
	new->next = b;
	b->prev = new;
	new->n = n;
	return (new);
}
