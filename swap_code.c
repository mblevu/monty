#include "monty.h"
/**
 * swap_values - swaps elements
 * @head: pointer to the head of the stack
 * @line_number: line number
 */

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
