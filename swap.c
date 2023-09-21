#include "monty.h"

/**
 * bedel - swaps the top two elements of the stack
 * @head: pointer to the head of the stack
 * @counter: line number
 * Return: nothing
*/

void bedel(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int length = 0, tmp;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	tmp = temp->n;
	temp->n = temp->next->n;
	temp->next->n = tmp;
}
