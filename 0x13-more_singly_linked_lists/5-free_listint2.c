#include "lists.h"

/**
 * free_listint2 -> Frees a listint_t list.
 *
 * @head: Input list
*/

void free_listint2(listint_t **head)
{
	listint_t *free_list;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		free_list = *head;
		*head = (*head)->next;
		free(free_list);
	}
	*head = NULL;
}
