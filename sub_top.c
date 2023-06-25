#include "monty.h"


/**
 * sub_top - subtracts the top from the second top element.
 * @head: stack head
 * @line_number: line number
 * Return: no return
 */

void sub_top(stack_t **head, unsigned int line_number)
{
	int result;
	stack_t *temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(sub.file);
		free(sub.content);
		stack_free(*head);
		exit(EXIT_FAILURE);
	}
	result = (*head)->next->n - (*head)->n;
	temp = *head;
	(*head)->next->n = result;
	*head = (*head)->next;
	(*head)->prev = NULL;
	free(temp);
}
