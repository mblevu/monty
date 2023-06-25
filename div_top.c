#include "monty.h"

/**
 * div_top - divides the second top element of the stack by the top element.
 * @head: stack head
 * @line_number: line number
 * Return: no return
 */

void div_top(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	int result;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
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
	result = (*head)->next->n / (*head)->n;
	temp = *head;
	(*head)->next->n = result;
	*head = (*head)->next;
	(*head)->prev = NULL;
	free(temp);
}
