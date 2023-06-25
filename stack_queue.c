#include"monty.h"

/**
 * set_stack - sets the format of the data to a stack (LIFO)
 * @head: stack head
 * @line_number: line number
 * Return: no return
 */
void set_stack(stack_t **head, unsigned int line_number)
{
    (void)head;
    (void)line_number;
    sub.lifi = 0;
}
/**
 * set_queue - sets the stack mode to queue (FIFO)
 * @head: pointer to the head of the stack
 * @line_number: line number
 */

void set_queue(stack_t **head, unsigned int line_number)
{
    (void)head;
    (void)line_number;
    sub.lifi = 1;
}