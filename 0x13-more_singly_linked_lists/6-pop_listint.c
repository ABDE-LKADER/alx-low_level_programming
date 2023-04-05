#include "lists.h"

/**
 * pop_listint -> Deletes the head node of a listint_t linked list.
 *
 * @head: Input list
 *
 * Return: Deleted Content
*/

int pop_listint(listint_t **head)
{
	listint_t *free_list;
	int content;

	if (*head == NULL)
		return (0);
	free_list = *head;
	content = free_list->n;
	*head = (*head)->next;
	free(free_list);
	return (content);
}
