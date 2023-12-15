#include "monty.h"

/**
 * op_pint - print stack head
 * @line_number: line number
*/

void op_pint(stack_t **stack, unsigned int line_number)
{
	data.n = line_number;
	printf("%d\n", (*stack)->n);
}
