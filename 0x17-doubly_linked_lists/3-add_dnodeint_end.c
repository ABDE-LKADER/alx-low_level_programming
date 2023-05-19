#include "lists.h"

/**
 * add_dnodeint_end -> Adds a new node at the end of a dlistint_t list
 * @head: Head List
 * @n: Add Number
 * Return: New Node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *a;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head != NULL)
	{
		a = *head;
		while (a->next != NULL)
			a = a->next;
		a->next = new;
		new->prev = a;
	}
	else
		*head = new;
	return (new);
}
