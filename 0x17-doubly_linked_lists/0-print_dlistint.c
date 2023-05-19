#include "lists.h"

/**
 * print_dlistint -> Prints all the elements of a dlistint_t list
 * @h: Head List
 * Return: Nodes Number
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	while (h->prev != NULL)
		h = h->prev;
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	} return (i);
}
