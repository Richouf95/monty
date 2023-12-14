#include "monty.h"

/**
 * clear_stack - clear stack
 * @stack: stack
*/

void free_stack(stack_t **stack)
{
	stack_t *temp;

	while (*stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
}
