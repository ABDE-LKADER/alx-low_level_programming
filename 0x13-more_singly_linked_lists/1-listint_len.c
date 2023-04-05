#include "lists.h"

/**
 * listint_len -> returns the number of elements in a linked listint_t list
 *
 * @h: Input list
 *
 * Return: Nodes Number
*/

size_t listint_len(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
		h = h->next;
	return (nodes);
}
