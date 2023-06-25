#include "monty.h"

int execute_op(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
    instruction_t opst[] = {
        {"push", push_stack}, {"pall", new_pall}, {"pint", pint},
        {"pop", pop_it}, {"swap", swap_values}, {"add", add_to_queue},
        {"nop", nop}, {"sub", sub_top}, {"div", div_top},
        {"mul", mul_top}, {"mod", mod_top}, {"pchar", print_character},
        {"pstr", print_string}, {"rotl", rotateleft}, {"rotr", rotateright},
        {"queue", set_queue}, {"stack", set_stack},
        {NULL, NULL}
    };

    char *op = strtok(content, " \n\t");
    if (op && op[0] == '#')
        return 0;

    sub.arg = strtok(NULL, " \n\t");

    for (int i = 0; opst[i].opcode; i++)
    {
        if (strcmp(op, opst[i].opcode) == 0)
        {
            opst[i].f(stack, counter);
            return 0;
        }
    }

    if (op)
    {
        fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
        fclose(file);
        free(content);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }

    return 1;
}
