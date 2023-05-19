#include "lists.h"

/**
 * print_dlistint -> Prints all the elements of a dlistint_t list
 * @h: Head List
 * Return: Nodes Number
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	} return (i);
}
