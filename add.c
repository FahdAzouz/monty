#include "monty.h"

/**
 * add - sum the top two elements of the stack
 * @stack: - pointer to stack
 * @line_num: - line number
 *
 * Return: - pointer to stack with sum of top two elements
 */
stack_t *add(stack_t **stack, unsigned int line_num)
{
	int summ = 0;
	stack_t *h;

	h = *stack;
	if (h->next == NULL || h == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	summ = (h->next->n) + (h->n);
	*stack = (*stack)->next;
	free(h);

	if (*stack != NULL)
		(*stack)->prev = NULL;
	(*stack)->n = summ;
	return (*stack);
}
