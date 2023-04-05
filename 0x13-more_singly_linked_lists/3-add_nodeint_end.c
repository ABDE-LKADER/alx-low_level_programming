#include "lists.h"

/**
 * add_nodeint_end -> Adds a new node at the end of a listint_t list.
 *
 * @head: Input list
 * @n: Input number
 *
 * Return: Depend Condition
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	for (last_node = *head; last_node->next != NULL; last_node = last_node->next)
		continue;
	last_node->next = new_node;
	return (new_node);
}
