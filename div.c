#include "monty.h"

/**
 * _div - divides the second top element of the stack with the top element
 * @stack: - pointer to stack
 * @line_num: - line number
 *
 * Return: stack
 */
stack_t *_div(stack_t **stack, unsigned int line_num)
{
	stack_t *h;
	int div = 0;

	h = *stack;
	if (h->next == NULL || h == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_num);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_num);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	div = (h->next->n) / (h->n);
	*stack = (*stack)->next;
	free(h);

	if (*stack != NULL)
		(*stack)->prev = NULL;
	(*stack)->n = div;
	return (*stack);
}