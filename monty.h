#ifndef MONTY_H
#define MONTY_H



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: defines a node in the doubly LL
 * representing a stack/queue
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: defines an opcode and its associated
 * funtion for handling the operation
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct sub_s - variables, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change
 * Description: carry values through the program
*/
typedef struct sub_s
{
        char *arg;
        FILE *file;
        char *content;
        int lifi;
} sub_t;

extern sub_t sub;

/* Function prototypes */

/* Push element to stack, push_new.c */
void push(stack_t **stack, int value);
void push_stack(stack_t **head, unsigned int line_number);

/*error.c*/
void display_error_message(unsigned int line_number);

/*add int to stack, addnode.c*/
void add_to_stack(stack_t **head, int n);

/*add int to queue, addqueue.c*/
void add_to_queue(stack_t **head, int n);

/* print all values on the stack, new_pall.c */
void pall(stack_t **stack);
void new_pall(stack_t **head, unsigned int line_number);

/*Check is string represents an integer is_integer.c */
int is_integer(char *str);

/*custom_getline.c*/
ssize_t custom_getline(char **lineptr, size_t *n, FILE *stream);

/*pint.c*/
void new_pint(stack_t **head, unsigned int line_number);

/*free memory allocated for stack stackfree.c*/
void stack_free(stack_t *head);

/*pop_it.c*/
void pop(stack_t **stack, unsigned int line_number);
void pop_it(stack_t **head, unsigned int line_number);

/*swap_code*/
void swap(stack_t **stack, unsigned int line_number);
void swap_values(stack_t **head, unsigned int line_number);

/*add top two elements of the stack, add_top.c*/
void add_top(stack_t **head, unsigned int line_number);

/*subttract top two elements of the stack sub_top.c*/
void sub_top(stack_t **head, unsigned int line_number);

/*divide top two elements of the stack, div_top.c*/
void div_top(stack_t **head, unsigned int line_number);

/*multiply the top two element of the stack, mul_top.c*/
void mul_top(stack_t **head, unsigned int line_number);

/*computes rest of division of top two element, mod_top.c*/
void mod_top(stack_t **head, unsigned int line_number);

/*noothing.c*/
void nop(stack_t **stack, unsigned int line_number);
/*comment*/
void comment(stack_t **stack, unsigned int line_number);

/*pchar prints the char top of the stack op_pchar.c*/
void print_character(stack_t **head, unsigned int line_number);

/*pstr prints string starting at topof the stack, op_pstr.c*/
void print_string(stack_t **head, unsigned int line_number);

/*rotl rotates the stack to the top rotl.c*/
void rotateleft(stack_t **head, unsigned int line_number);

/*rotr rotates the stack to the bottom rotr.c*/
void rotateright(stack_t **head, unsigned int line_number);

/*stack and queue opcod, stack_queue.c*/
void set_stack(stack_t **head, unsigned int line_number);
void set_queue(stack_t **head, unsigned int line_number);

/*execute.c*/
int execute_op(char *con, stack_t **stack, unsigned int coun, FILE *file);

/*custom getline. getline.c*/
ssize_t custom_getline(char **lineptr, size_t *n, FILE *stream);

#endif /*MONTY_H*/