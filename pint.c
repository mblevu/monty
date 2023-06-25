#include "monty.h"

/**
 * pint - prints first element of stack
 * @stack: pointer to stack
 * @line_number: line
 * Return - 
*/
/*
void pint(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }
    printf("%d\n", (*stack)->n);
}*/
void new_pint(stack_t **head, unsigned int line_number)
{
    if (*head == NULL)
    {
        fprintf(stderr, "L%u: Can not pint, stack empty\n", line_number);
        fclose(sub.file);
        free(sub.content);
        stack_free(*head);
        exit(EXIT_FAILURE);
    }
    printf("%d\n", (*head)->n);
}