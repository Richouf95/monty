#include "monty.h"

/**
 * op_push - function to add new node
 * @stack: stack
 * @x: node value
*/

extern data_t data;

void op_push(stack_t **stack, unsigned int line_number)
{
	printf("Line number %d", line_number);

	addNode(stack, data.x);
}
