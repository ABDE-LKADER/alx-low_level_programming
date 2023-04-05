#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index of a listint_t
 *
 * @head: Input list
 * @index: Index Node
 *
 * Return: Depend Condition
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *T, *T2;
	unsigned int i;

	if (head == NULL)
		return (-1);
	T = *head;
	if (index == 0)
	{
		*head = T->next;
		free(T);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (T == NULL)
			return (-1);
		T = T->next;
	}
	T2 = T->next;
	T->next = T2->next;
	free(T2);
	return (1);
}
