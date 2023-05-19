#include "lists.h"

/**
 * delete_dnodeint_at_index -> Deletes node at index a dlistint_t linked list
 * @head: Head List
 * @index: Index Node
 * Return: Depend Condition
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *a, *b;

	if (head == NULL || *head == NULL)
		return (-1);
	a = *head;
	if (index == 0)
	{
		*head = a->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(a);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (a == NULL)
			return (-1);
		b = a;
		a = a->next;
	} b->next = a->next;
	if (a->next != NULL)
		a->next->prev = b;
	free(a);
	return (1);
}
