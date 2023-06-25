#include "monty.h"

/**
 * rotateright - rotates the stack to the bottom
 * @head: stack head
 * @line_number: line number
 * Return: no return
 */

void rotateright(stack_t **head, unsigned int line_number)
{
	stack_t *last, *second_last;
	(void)line_number;

	if (*head == NULL || (*head)->next == NULL)
		return;

	last = *head;
	second_last = last->next;

	while (second_last->next != NULL)
	{
		last = last->next;
		second_last = second_last->next;
	}

	last->next = NULL;
	second_last->next = *head;
	second_last->prev = NULL;
	(*head)->prev = second_last;
	*head = second_last;
}
