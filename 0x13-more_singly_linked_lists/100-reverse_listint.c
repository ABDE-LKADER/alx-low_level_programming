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
	T = *head;
	while (T != NULL)
	{
		T2 = T->next;
		T->next = T1;
		T1 = T;
		T = T2;
	}
	*head = T1;
	return (*head);
}
