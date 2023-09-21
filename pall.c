#include "monty.h"

/**
 * pall - prints all the values on the stack
 * @stack: pointer to the stack
 * @line_number: line number
 * Return: pointer to the stack
 */

stack_t *pall(stack_t **stack,
		unsigned int line_number __attribute__((unused)))
{
	stack_t *temp;
	size_t node = 0;

	temp = *stack;

	if (*stack == NULL)
	{
		return (NULL);
	}

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		node++;
	}

	return (*stack);
}
