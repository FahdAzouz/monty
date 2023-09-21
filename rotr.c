#include "monty.h"
/**
  *f_rotr - rotates the stack to the bottom of the stack
  *@head: pointer to the head of the stack
  *@counter: line number
  *Return: nothing
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *muaqat;

	muaqat = *head;
	if ((*head)->next == NULL || *head == NULL)
	{
		return;
	}
	while (muaqat->next)
	{
		muaqat = muaqat->next;
	}
	muaqat->next = *head;
	muaqat->prev->next = NULL;
	muaqat->prev = NULL;
	(*head)->prev = muaqat;
	(*head) = muaqat;
}
