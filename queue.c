#include "monty.h"

/**
 * addqueue - add a node at the end of the stack
 * @n: value of the node
 * @head: pointer to the head of the stack
 * Return: nothing
*/
void addqueue(stack_t **head, int n)
{
	stack_t *node, *temp;

	temp = *head;
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error\n");
	}
	node->n = n;
	node->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*head = node;
		node->prev = NULL;
	}
	else
	{
		temp->next = node;
		node->prev = temp;
	}
}

/**
 * f_queue - change the mode to queue
 * @head: pointer to the head of the stack
 * @counter: line number
 * Return: nothing
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}