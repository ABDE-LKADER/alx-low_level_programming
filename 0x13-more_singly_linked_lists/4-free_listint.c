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
        free(free_list);
    }
}


#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    free_listint(head);
    head = NULL;
    return (0);
}