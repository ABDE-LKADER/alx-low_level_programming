#include "lists.h"

/**
 * free_listint_safe -> Frees a listint_t list
 *
 * @h: Input list
 *
 * Return: Number Nodes
*/

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *T = *h;

	if (h == NULL)
		exit(98);
	while (*h != NULL)
	{
		T = (*h)->next;
		free(*h);
		*h = T;
		i++;
	}
	*h = NULL;
	return (i);
}
