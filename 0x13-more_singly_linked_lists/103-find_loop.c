#include "lists.h"

/**
 * find_listint_loop -> Finds the loop in a linked list
 *
 * @head: Input list
 *
 * Return: Address Node
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *T = head;
	listint_t *T2 = head;

	if (head == NULL)
		return (NULL);
	while (T != NULL && T2 != NULL && T2->next != NULL)
	{
		T = T->next;
		T2 = T2->next->next;
		if (T == T2)
		{
			T = head;
			while (T != T2)
			{
				T = T->next;
				T2 = T2->next;
			}
			return (T);
		}
	}
	return (NULL);
}
