#include "monty.h"

/**
 * mul - multiplies the second top element of the stack with the top element
 * @stack: - pointer to stack
 * @line_num: - line number
 *
 * Return: stack
 */
stack_t *mul(stack_t **stack, unsigned int line_num)
{
	int mul = 0;
	stack_t *h;

	h = *stack;
	if (h->next == NULL || h == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_num);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	mul = (h->next->n) * (h->n);
	*stack = (*stack)->next;
	free(h);

	if (*stack != NULL)
		(*stack)->prev = NULL;
	(*stack)->n = mul;
	return (*stack);
}
