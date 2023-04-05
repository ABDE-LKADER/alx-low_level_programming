#include "lists.h"

/**
 * insert_nodeint_at_index -> Inserts a new node at a given position.
 *
 * @head: Input list
 * @idx: Index
 * @n: Value
 *
 * Return: Depend Condition (Address)
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *T;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	T = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (T == NULL)
		{
			free(new_node);
			return (NULL);
		}
		T = T->next;
	}
	new_node->next = T->next;
	T->next = new_node;
	return (new_node);
}
