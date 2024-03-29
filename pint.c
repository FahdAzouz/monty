#include "monty.h"

/**
 * pint_AZ - print the value at the top of the stack
 * @head: pointer to the head of the stack
 * @counter: line number
 * Return: nothing
*/

void pint_AZ(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}
