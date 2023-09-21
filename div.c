#include "monty.h"
/**
 * f_div - divides the second top element of the stack by the top element
 * @head: pointer to head of stack
 * @counter: counter for line number
 * Return: nothing
*/
void f_div(stack_t **head, unsigned int counter)
{
	int length = 0, temp;
	stack_t *stack_h;


	stack_h = *head;
	while (stack_h)
	{
		stack_h = stack_h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	stack_h = *head;
	if (stack_h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	temp = stack_h->next->n / stack_h->n;
	stack_h->next->n = temp;
	*head = stack_h->next;
	free(stack_h);
}
