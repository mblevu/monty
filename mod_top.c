#include "monty.h"

/**
 * mod_top - computes the rest of division of second top by top element.
 * @head: stack head
 * @line_number: line number
 * Return: no return
 */

void mod_top(stack_t **head, unsigned int line_number)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		fclose(sub.file);
		free(sub.content);
		stack_free(*head);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(sub.file);
		free(sub.content);
		stack_free(*head);
		exit(EXIT_FAILURE);
	}
}
