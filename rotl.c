#include "monty.h"
/**
  *f_rotl - rotates the stack to the top
  *@head: pointer to the head of the stack
  *@counter: line number
  *Return: nothing
 */

void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *muaqat = *head, *tmp;

	if ((*head)->next == NULL || *head == NULL)
	{
		return;
	}
	tmp = (*head)->next;
	tmp->prev = NULL;
	while (muaqat->next != NULL)
	{
		muaqat = muaqat->next;
	}
	muaqat->next = *head;
	(*head)->next = NULL;
	(*head)->prev = muaqat;
	(*head) = tmp;
}
