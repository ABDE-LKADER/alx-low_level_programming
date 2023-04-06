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
	listint_t *T;

	if (*head == NULL)
		return (NULL);
	T == *head;
	while (*head != NULL)
	{
		T1 = T->next;
		T->next = T2;
		T2 = *head;
		*head = T1;
	}
	*head = T2;
	return (*head);
}
