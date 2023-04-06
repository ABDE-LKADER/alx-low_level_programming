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
	listint_t *T1 = NULL;
	listint_t *T2 = NULL;

	if (head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		T2 = (*head)->next;
		(*head)->next = T1;
		T1 = *head;
		*head = T2;
	}
	*head = T1;
	return (*head);
}
