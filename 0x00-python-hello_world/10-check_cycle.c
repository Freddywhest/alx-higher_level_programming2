/*
 * File: 10-check_cycle.c   
*/

#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly linked list has a cycle in it.
 * @list: The singly linked list to check.
 *
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1.
 */
int check_cycle(listint_t *list)
{
    listint_t *tortoise, *hare;

    if (list == NULL || list->next == NULL)
        return (0);

    tortoise = list->next;
    hare = list->next->next;

    while (hare)
    {
        if (tortoise == hare)
            return (1);

        tortoise = tortoise->next;
        hare = hare->next;

        if (hare && hare->next)
            hare = hare->next;
    }

    return (0);
}
