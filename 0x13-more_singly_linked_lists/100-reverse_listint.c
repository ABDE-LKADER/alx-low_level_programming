#include "lists.h"

/**
 * reverse_listint -> Reverses a listint_t linked list
 *
 * @head: Input list
 *
 * Return: Reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (*head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
