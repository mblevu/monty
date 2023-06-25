#include "monty.h"

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

