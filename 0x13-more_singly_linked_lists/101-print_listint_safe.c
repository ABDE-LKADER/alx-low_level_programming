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
	i = 0;
	while (head)
	{
		T = head - head->next;
		i++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (T <= 0)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		else
			head = head->next;
	}
	return (i);
}
