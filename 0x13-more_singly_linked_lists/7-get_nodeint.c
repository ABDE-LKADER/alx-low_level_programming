#include "lists.h"

/**
 * get_nodeint_at_index -> Returns the nth node of a listint_t linked list.
 *
 * @head: Input list
 * @index: Index Node
 *
 * Return: Node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
