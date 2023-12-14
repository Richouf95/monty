#include "monty.h"

/**
 * op_pop - remove head of stack
 * @stack: stack
 * @line_number: line number
*/

void op_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		printf("pop line_number: %u", line_number);
		return;
	}

	temp = *stack;
	*stack = temp->next;

	free(temp);
}
