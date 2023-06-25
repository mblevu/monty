#include "monty.h"

void stack_free(stack_t *head)
{
    stack_t *current;

    while (head != NULL)
    {
        current = head;
        head = head->next;
        free(current);
    }
}