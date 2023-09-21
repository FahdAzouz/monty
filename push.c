#include "monty.h"
/**
 * f_push - function that pushes an element to the stack.
 * @head: pointer to the head of the stack
 * @counter: line number
 * Return: nothing
*/

void f_push(stack_t **head, unsigned int counter)
{
	int k, i = 0, drapo = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg[i] < 48 || bus.arg[i] > 57)
				drapo = 1; 
		}
		if (drapo == 1)
		{ 
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	k = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode_AZ(head, k);
	else
		addqueue(head, k);
}
