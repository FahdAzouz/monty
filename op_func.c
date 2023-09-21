#include "monty.h"
/**
 * op_func - function to select the correct function to perform
 *
 * @stack: pointer to the stack
 * @op_code: command to be executed
 * @line_num: line number
 *
 * Return: pointer to the stack
 */

stack_t *op_func(stack_t **stack, char *op_code, unsigned int line_num)
{
	int j = 0;

	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"nop", nop},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"sub", sub},
		{"div", _div},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{NULL, NULL}
	};

	while (ops[j].opcode != NULL)
	{
		if (strcmp(ops[j].opcode, op_code) == 0)
		{
			return ((ops[j]).f(stack, line_num));
		}
		j++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_num, op_code);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
