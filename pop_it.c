#include "monty.h"

/**
 * pop_it - removes top element of the stack
 * @head:double pointer to head of stack
 * @line_number: current line
*/
void pop_it(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(sub.file);
		free(sub.content);
		stack_free(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = (*head)->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	free(temp);
}
