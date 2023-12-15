#include "monty.h"

/**
 * op_push - function to add new node
 * @stack: stack
 * @line_number: line number
*/

void op_push(stack_t **stack, unsigned int line_number)
{
	data.n = line_number;

	addNode(stack, data.x);
}
