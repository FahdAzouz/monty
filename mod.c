#include "monty.h"
/**
 * hadakmod - computes the rest of the division of the second
 * element of the stack by the top element of the stack.
 * @head: stack head pointer
 * @counter: line number
 * Return: nothing
*/
void hadakmod(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int len = 0, tmp;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	temp = *head;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = temp->next->n % temp->n;
	temp->next->n = tmp;
	*head = temp->next;
	free(temp);
}
