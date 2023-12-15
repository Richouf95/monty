#include "monty.h"

/**
 * op_push - function to add new node
 * @stack: stack
 * @line_number: line number
*/

void op_push(stack_t **stack, unsigned int line_number)
{
	/*if (data.x == 90500715)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}*/
	data.n = line_number;

	addNode(stack, data.x);
}
