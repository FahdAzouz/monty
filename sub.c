#include "monty.h"
/**
  *f_sub - subtracts the top element of the stack from the second top element
  *@head: pointer to the head of the stack
  *@counter: line number
  *Return: nothing
 */
void f_sub(stack_t **head, unsigned int counter)
{
	int moo, block;
	stack_t *temp;

	temp = *head;
	for (block = 0; temp != NULL; block++)
		temp = temp->next;
	if (block < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	temp = *head;
	moo = temp->next->n - temp->n;
	temp->next->n = moo;
	*head = temp->next;
	free(temp);
}
