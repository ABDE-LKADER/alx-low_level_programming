#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 *
 * @head: Input list
 *
 * Return: Number Nodes
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *T = head;

	if (head == NULL)
		exit(98);
	while (T != NULL)
	{
		printf("[%p] %d\n", (void *)T, T->n);
		T = T->next;
		i++;
	}
	return (i);
}
