#include "monty.h"

/**
 * print_character - prints the char at the top of the stack
 * @head: stack head
 * @line_number: line number
 * Return: no return
 */

void print_character(stack_t **head, unsigned int line_number)
{
    int value;

    if (*head == NULL)
    {
        fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
        fclose(sub.file);
        free(sub.content);
        stack_free(*head);
        exit(EXIT_FAILURE);
    }
    value = (*head)->n;
    if (value < 0 || value > 127)
    {
        fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
        fclose(sub.file);
        free(sub.content);
        stack_free(*head);
        exit(EXIT_FAILURE);
    }
    printf("%c\n", value);
}