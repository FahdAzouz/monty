#include "monty.h"
/**
 * f_add - sum the top two elements of the stack and removes the top element
 * @head: stack head pointer
 * @counter: line_number
 * Return: nothing
*/

void f_add(stack_t **head, unsigned int counter)
{
	int length = 0, aux;
	stack_t *head_s;

	head_s = *head;
	while (head_s)
	{
		head_s = head_s->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head_s = *head;
	aux = head_s->next->n + head_s->n;
	head_s->next->n = aux;
	*head = head_s->next;
	free(head_s);
}
