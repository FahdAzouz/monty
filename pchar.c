#include "monty.h"
/**
 * f_pchar - show the char at the top of the stack,
 * according ASCII code before new line
 * @head: pointer to head of stack
 * @counter: counter for line number
 *
 * Return: nothing
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *temp;

	temp = *head;
	if (!temp)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (temp->n < 0 || temp->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", temp->n);
}
