#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};

/**
* main - main function of the monty interpreter
* @argc: number of arguments
* @argv: arguments passed to the program
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *c;
	FILE *file;
	ssize_t line_read = 1;
	stack_t *stack = NULL;
	size_t size = 0;
	unsigned int lekss = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (line_read > 0)
	{
		c = NULL;
		line_read = getline(&c, &size, file);
		bus.content = c;
		lekss = lekss + 1;
		if (line_read > 0)
		{
			execute(c, &stack, lekss, file);
		}
		free(c);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
