#include "lists.h"

/**
 * print_dlistint -> Prints all the elements of a dlistint_t list
 * @h: Head List
 * Return: Nodes Number
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
