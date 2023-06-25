#include "monty.h"

/**
 * execute_op - adds the top two elements of the stack.
 * @con: stack con
 * @stack: head
 * @coun: coun
 * @file: file
 * Return: 1
 */
int execute_op(char *con, stack_t **stack, unsigned int coun, FILE *file)
{
	int i;

	instruction_t opst[] = {
		{"push", push_stack}, {"pall", new_pall}, {"pint", new_pint},
		{"pop", pop_it}, {"swap", swap_values}, {"add", set_stack},
		{"nop", nop}, {"sub", sub_top}, {"div", div_top},
		{"mul", mul_top}, {"mod", mod_top}, {"pchar", print_character},
		{"pstr", print_string}, {"rotl", rotateleft}, {"rotr", rotateright},
		{"queue", set_queue}, {"stack", set_stack},
		{NULL, NULL}
	};

	char *op = strtok(con, " \n\t");

	if (op && op[0] == '#')
		return (0);

	sub.arg = strtok(NULL, " \n\t");

	for (i = 0; opst[i].opcode; i++)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{
			opst[i].f(stack, coun);
			return (0);
		}
	}

	if (op)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", coun, op);
		fclose(file);
		free(con);
		stack_free(*stack);
		exit(EXIT_FAILURE);
	}

	return (1);
}
