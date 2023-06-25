#include "monty.h"


/**
 * sub_top - subtracts the top element of the stack from the second top element.
 * @head: stack head
 * @line_number: line number
 * Return: no return
 */

void sub_top(stack_t **head, unsigned int line_number)
{
    int result;

    if (*head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
        fclose(sub.file);
        free(sub.content);
        stack_free(*head);
        exit(EXIT_FAILURE);  
    }
    result = (*head)->next->n - (*head)->n;
    stack_t *temp = *head;
    (*head)->next->n = result;
    *head = (*head)->next;
    (*head)->prev = NULL;
    free(temp);
}