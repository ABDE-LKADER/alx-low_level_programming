#include "lists.h"

/**
 * sum_dlistint -> Returns the sum of all the n a dlistint_t linked list
 * @head: Head List
 * Return: Sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	for (; head != NULL; head = head->next)
		sum += head->n;
	return (sum);
}
