#include "monty.h"

/**
 * clear_stack - clear stack
 * @stack: stack
*/

void free_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	while (*stack)
	{
		printf("line_number: %u", line_number);
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
}
