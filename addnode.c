#include "monty.h"


void add_to_stack(stack_t **head, int n)
{
    stack_t *new_node = malloc(sizeof(stack_t));

    if (new_node == NULL)
    {
        fprintf(stderr, "Error: Unable to allocate memory\n");
        exit(EXIT_FAILURE);
    }
    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = *head;

    if (*head != NULL)
    {
        (*head)->prev = new_node;
    }
    *head = new_node;
}