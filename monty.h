#ifndef MONTY_H
#define MONTY_H

#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * struct bus_s - opcode and its function and arguments
 * @arg: argument
 * @file: file
 * @content: content
 * @lifi: lifi
 * Description: carries the arguments
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void f_queue(stack_t **head, unsigned int counter);
void f_stack(stack_t **head, unsigned int counter);
void addqueue(stack_t **head, int n);
void addnode_AZ(stack_t **head, int n);
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void f_rotl(stack_t **head, unsigned int counter);
void ktebstr(stack_t **head, unsigned int counter);
void pchar_AZ(stack_t **head, unsigned int counter);
void hadakmod(stack_t **head, unsigned int counter);
void dreb(stack_t **head, unsigned int counter);
void qsem(stack_t **head, unsigned int counter);
void naqiss(stack_t **head, unsigned int counter);
void nop_AZ(stack_t **head, unsigned int counter);
void add_AZ(stack_t **head, unsigned int counter);
void bedel(stack_t **head, unsigned int counter);
void pop_AZ(stack_t **head, unsigned int counter);
void free_stack(stack_t *head);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void pint_AZ(stack_t **head, unsigned int number);
void f_pall(stack_t **head, unsigned int number);
void f_push(stack_t **head, unsigned int number);
char  *clean_line(char *content);
ssize_t getstdin(char **lineptr, int file);
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);

#endif /* MONTY_H */
