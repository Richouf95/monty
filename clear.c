#include "monty.h"

/**
 * clearStack - clear stack
 * @stack: stack
*/

stack_t *clearStack(stack_t **stack)
{
	stack_t *temp = *stack;

	if (temp == NULL)
		return (temp);

	while (temp)
		temp = pop(&temp);
}
