#include "lists.h"

/**
 * free_listint -> Frees a listint_t list.
 *
 * @head: Input List
*/

void free_listint(listint_t *head)
{
    listint_t *free_list;

    while (head != NULL)
    {
        free_list = head;
        head = head->next;
        free(tmp);
    }
}