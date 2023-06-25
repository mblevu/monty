#include "monty.h"

/**
 * display_error_message - displays error
 * @line_number: line_number
 * Return: no return
 */
void display_error_message(unsigned int line_number)
{
	fprintf(stderr, "L%d: usage: push integer\n", line_number);
	fclose(sub.file);
	free(sub.content);
	/*stack_free(*head);*/
	exit(EXIT_FAILURE);
}
