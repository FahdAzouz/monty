#include "monty.h"

/**
 * mod - 
 * @stack: - stack
 * @line_num: - line number
 * Return: stack
 */
stack_t *mod(stack_t **stack, unsigned int line_num)
{
	int module = 0;
	stack_t *h;


	h = *stack;
	if (h->next == NULL || h == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_num);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_num);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	module = (h->next->n) % (h->n);
	*stack = (*stack)->next;
	free(h);

	if (*stack != NULL)
		(*stack)->prev = NULL;
	(*stack)->n = module;
	return (*stack);
}
