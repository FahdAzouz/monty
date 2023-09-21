#include "monty.h"
/**
 * f_pstr - function that prints the string starting at the top of
 * the stack, followed by a new line.
 * @head: pointer to the head of the stack
 * @counter: line number
 * Return: nothing
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	(void)counter;

	temp = *head;
	while (temp)
	{
		if (temp->n <= 0)
		{
			break;
		}
		if (temp->n > 127)
		{
			break;
		}
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}