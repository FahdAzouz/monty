#include "monty.h"
/**
 * addnode_AZ - adds a new node at the beginning of a stack_t list.
 * @head: stack head
 * @n: value of the new node
 * Return: nothing
*/

void addnode_AZ(stack_t **head, int n)
{
	stack_t *new_n, *temp;

	temp = *head;
	new_n = malloc(sizeof(stack_t));
	if (new_n == NULL)
	{ printf("Error\n");
		exit(0); }
	if (temp)
		temp->prev = new_n;

	new_n->n = n;
	new_n->next = *head;
	new_n->prev = NULL;
	*head = new_n;
}
