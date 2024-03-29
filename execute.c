#include "monty.h"
/**
* execute - execuuutes the opcode in the line content
* @stack: pointer to stack
* @counter: line number
* @file: file pointer
* @content: line content
* Return: 0 on success, 1 on failure
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", pint_AZ},
				{"pop", pop_AZ},
				{"swap", bedel},
				{"add", add_AZ},
				{"nop", nop_AZ},
				{"sub", naqiss},
				{"div", qsem},
				{"mul", dreb},
				{"mod", hadakmod},
				{"pchar", pchar_AZ},
				{"pstr", ktebstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", queue_AZ},
				{"stack", stack_AZ},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op)
	{
		if (op[0] == '#')
			return (0);
	}
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op)
	{
		if (opst[i].opcode == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
			fclose(file);
			free(content);
			free_stack(*stack);
			exit(EXIT_FAILURE);
		}
	}
	return (1);
}
