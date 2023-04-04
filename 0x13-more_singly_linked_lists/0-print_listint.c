#include "lists.h"

/**
 * print_listint -> Prints all the elements of a listint_t list
 *
 * @h: Input list
 *
 * Return: Nodes Number
*/

size_t print_listint(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
