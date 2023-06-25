#include "monty.h"
/*
void swap(stack_t **stack, unsigned int line_number)
{
    stack_t *temp;

    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }
    temp = (*stack)->next;
    (*stack)->next = temp->next;
    if(temp->next != NULL)
        temp->next->prev = *stack;
    temp->prev = NULL;
    temp->next = *stack;
    (*stack)->prev = temp;
    *stack = temp;
}*/

void swap_values(stack_t **head, unsigned int line_number)
{
    stack_t *current = *head;
    int len = 0;
    int temp;

    while (current)
    {
        current = current->next;
        len++;
    }
    if (len < 2)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        fclose(sub.file);
        free(sub.content);
        stack_free(*head);
        exit(EXIT_FAILURE);
    }

    current = *head;
    temp = current->n;
    current->n = current->next->n;
    current->next->n = temp;
}
