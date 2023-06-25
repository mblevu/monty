#include "monty.h"

/**
 * pop - removes top element of the stack
 * @stack:double pointer to head of stack
 * @line_number: current line 
*/
/*
void pop(stack_t **stack, unsigned int line_number)
{
    stack_t *temp;

    if (*stack == NULL)
    {
        fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }

    temp = *stack;
    *stack = (*stack)->next;
    if (*stack != NULL)
        (*stack)->prev = NULL;
    free(temp);
}*/

void pop_it(stack_t **head, unsigned int line_number)
{
    stack_t *temp;

    if (*head == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        fclose(sub.file);
        free(sub.content);
        stack_free(*head);
        exit(EXIT_FAILURE);
    }
    temp = *head;
    *head = (*head)->next;
    if (*head != NULL)
        (*head)->prev = NULL;
    free(temp);
}