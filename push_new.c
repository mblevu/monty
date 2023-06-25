#include "monty.h"

/**
 * push_stack - Pushes an element to the stack
 * @head: Pointer to the top of the stack
 * @line_number: Line number in the Monty byte code file
 */

void push_stack(stack_t **head, unsigned int line_number)
{
	int n;

	if (!sub.arg || !is_integer(sub.arg))
		display_error_message(line_number);
	n = atoi(sub.arg);

	if (sub.lifi == 0)
		add_to_stack(head, n);
	else
		add_to_queue(head, n);
}

