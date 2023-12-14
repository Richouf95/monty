#include "monty.h"

/**
 * clearStack - clear stack
 * @stack: stack
*/

void clearStack(stack_t **stack)
{
	if (*stack == NULL)
		return;

	while (*stack)
		pop(stack);
}
