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
	size_t i;
	long int T;

	if (head == NULL)
		exit(98);
	for (i = 0; head != NULL; i++)
	{
		T = (long int)head;
		printf("[%p] %d\n", (void *)T, head->n);
		head = head->next;

		if (T <= (long int)head)
		{
			printf("-> [%p] %d\n", (void *)T, head->n);
			break;
		}
	}
	return (i);
}
