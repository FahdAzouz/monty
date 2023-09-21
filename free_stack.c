#include "monty.h"
/**
 * free_stack - frees a stack_t stack
 *
 * @stack: stack to be freed from memory
 * Return: void
 */
void free_stack(stack_t **stack)
{
	stack_t *tmpo;
	stack_t *h;

	h = *stack;
	while (h != NULL)
	{
		tmpo = h;
		h = h->next;
		free(tmpo);
	}
}