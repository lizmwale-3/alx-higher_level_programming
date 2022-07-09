#include "lists.h"
/**
 * check_cycle - checks of a singly linked lists has a cycle
 * @list: head of linked list
 * Return: 0 if cycle is absent, 1 if cycle is present
 **/

int check_cycle(listint_t *list)
{
        listint_t *f = NULL, *s = NULL;

        if (!list)
                return (0);
        f = list->next;
        s = list;

        while (f && f->next)
        {
                if (f == s)
                        return (1);
                f = f->next->next;
                s = s->next;
        }
        return (0);
}
