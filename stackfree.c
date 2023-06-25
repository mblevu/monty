#include "monty.h"

/**
 * stack_free - frees stack
 * @head: pointer to the head of the stack
 */

void stack_free(stack_t *head)
{
	stack_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
