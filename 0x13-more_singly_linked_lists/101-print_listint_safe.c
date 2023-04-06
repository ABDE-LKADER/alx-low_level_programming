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
	long int T;

	while (head)
	{
		T = head - head->next;
		i++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (T > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (i);
}
