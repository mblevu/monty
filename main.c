#include "monty.h"
#include <stdio.h>

/**
 * main - entry point.
 * @argc: argument count
 * @argv: argv
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	FILE *file;
	char *content = NULL;
	size_t size = 0;
	ssize_t read_line;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((read_line = custom_getline(&content, &size, file)) != -1)
	{
	counter++;
	sub.file = file;
	sub.content = content;

	if (read_line > 0)
	{
		execute_op(content, &stack, counter, file);
	}
	}

	free(content);
	stack_free(stack);
	fclose(file);

	return (0);
}
