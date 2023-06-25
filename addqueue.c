#include "monty.h"

/**
 * add_to_queue - adds a node to the tail of the stack
 * @head: pointer to the head of the stack
 * @n: value to be added
 */

void add_to_queue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new_node;
		new_node->prev = aux;
	}
	else
	{
		*head = new_node;
		new_node->prev = NULL;
	}
}
