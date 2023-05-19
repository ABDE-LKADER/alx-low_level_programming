#include "lists.h"

/**
 * get_dnodeint_at_index -> Returns the nth node of a dlistint_t linked list
 * @head: Head List
 * @index: Index Node
 * Return: Node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *a;

	if (head == NULL)
		return (NULL);
	a = head;
	for (i = 0; i < index; i++)
	{
		if (a == NULL)
			return (NULL);
		a = a->next;
	}
	return (a);
}
