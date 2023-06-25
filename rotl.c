#include "monty.h"

/**
 * rotateleft - rotates the stack to the top
 * @head: stack head
 * @line_number: line number
 * Return: no return
 */

void rotateleft(stack_t **head, unsigned int line_number)
{
    stack_t *last, *second_last;
    (void)line_number;

    if (*head == NULL || (*head)->next == NULL)
        return;
    last = *head;
    second_last = last->next;

    while (last->next != NULL)
    {
        last = last->next;
        second_last = second_last->next;
    }

    last->next = *head;
    (*head)->prev = last;
    (*head)->next = NULL;
    second_last->prev = NULL;
    *head = second_last;
}