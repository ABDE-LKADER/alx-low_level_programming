#include "lists.h"

/**
 * free_dlistint -> Frees a dlistint_t list
 * @head: Head List
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *a;

	while (head != NULL)
	{
		a = head;
		head = head->next;
		free(a);
	}
}
