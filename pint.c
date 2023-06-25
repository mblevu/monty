#include "monty.h"

/**
 * new_pint - prints first element of stack
 * @head: pointer to stack
 * @line_number: line
 * Return: void
*/

void new_pint(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: Can't pint, stack empty\n", line_number);
		fclose(sub.file);
		free(sub.content);
		stack_free(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
