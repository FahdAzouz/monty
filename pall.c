#include "monty.h"
/**
 * f_pall - print all the values on the stack
 * @head: pointer to head of stack
 * @counter: counter for line number
 * Return: nothing
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	(void)counter;

	temp = *head;
	if (temp == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
