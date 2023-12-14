#include "monty.h"

/**
 * main - main function
 * @argc: number of args
 * @argv: list of args
 * Return: program end status
*/

int main(int argc, char **argv)
{
	char *fileName;
	stack_t *stack = NULL;

	data.stack = &stack;

	if (argc != 2)
		exit(EXIT_FAILURE);

	fileName = argv[1];

	readMonty(fileName);

	free_stack(&stack);

	return (0);
}
