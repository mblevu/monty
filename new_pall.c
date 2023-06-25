#include "monty.h"

/**
 * pall - Prints all the values on the stack
 * @stack: Pointer to the top of the stack
 */
/*
void pall(stack_t **stack)
{
    stack_t *current = *stack;

    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}*/

/**
 * new_pall - Prints all the values on the stack
 * @head: Pointer to the top of the stack
 * @line_number: unused
 */
void new_pall(stack_t **head, unsigned int line_number)
{
    stack_t *current = *head;

    (void)line_number;

    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
