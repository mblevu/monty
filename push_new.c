#include "monty.h"

/**
 * push - Pushes an element to the stack
 * @stack: Pointer to the top of the stack
 * @line_number: Line number in the Monty byte code file
 */
/*
void push(stack_t **stack, int value)
{
    stack_t *new_node = malloc(sizeof(stack_t));
    
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = value;
    new_node->prev = NULL;
    new_node->next = *stack;

    if (*stack != NULL)
        (*stack)->prev = new_node;

    *stack = new_node;
}
*/

void push_stack(stack_t **head, unsigned int line_number)
{
    int n;

    if (!sub.arg || !is_integer(sub.arg))
        display_error_message(line_number);
    n = atoi(sub.arg);

    if (sub.lifi == 0)
        add_to_stack(head, n);
    else
        add_to_queue(head, n);
}
