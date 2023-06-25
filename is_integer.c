#include "monty.h"

/**
 * is_integer - Checks if a string represents an integer
 * @str: String to check
 * Return: 1 if the string represents an integer, 0 otherwise
 */

int is_integer(char *str)
{
	int i = 0;

	if (str[0] == '-')
		i = 1;

	for (; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}

	return (1);
}
