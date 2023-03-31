#include <stdio.h>
#include "lists.h"

/**
 * print_list -> Prints all the elements of a list_t list
 *
 * @h: Pointer Structure
 *
 * Return: Number Of Nodes
 */

size_t print_list(const list_t *h)
{
	int nodes;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
