#include "monty.h"
/**
 * f_mul - multiplies the second top element of the stack with the top element
 * @head: pointer to head of stack
 * @counter: counter for line number
 * Return: no return
*/
void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	temp = *head;
	tmp = temp->next->n * temp->n;
	temp->next->n = tmp;
	*head = temp->next;
	free(temp);
}
