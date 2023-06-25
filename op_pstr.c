#include "monty.h"

/**
 * print_string - prints the string starting at the top of the stack
 * @head: stack head
 * @line_number: line number
 * Return: no return
 */

void print_string(stack_t **head, unsigned int line_number)
{
	stack_t *current = *head;
	(void)line_number;

	while (current != NULL && current->n > 0 && current->n <= 127)
	{
		if (current->n == '\0')
			break;
		printf("%c", current->n);
		current = current->next;
	}
	printf("\n");
}
