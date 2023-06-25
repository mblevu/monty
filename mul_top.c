#include "monty.h"

/**
 * mul_top - multiplies second top with the top element.
 * @head: stack head
 * @line_number: line number
 * Return: no return
 */

void mul_top(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	int result;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		fclose(sub.file);
		free(sub.content);
		stack_free(*head);
		exit(EXIT_FAILURE);
	}
	result = (*head)->next->n * (*head)->n;
	temp = *head;
	(*head)->next->n = result;
	*head = (*head)->next;
	(*head)->prev = NULL;
	free(temp);
}
