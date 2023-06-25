#include "monty.h"

/**
 * add_top - adds the top two elements of the stack.
 * @head: stack head
 * @line_number: line_number
 * Return: no return
 */

void add_top(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	stack_t *current = *head;
	int len = 0;
	int sum;

	while (current)
	{
		len++;
		current = current->next;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(sub.file);
		free(sub.content);
		stack_free(*head);
		exit(EXIT_FAILURE);
	}
	sum = (*head)->n + (*head)->next->n;
	temp = *head;
	*head = (*head)->next;
	(*head)->prev = NULL;
	free(temp);
	(*head)->n = sum;
}
