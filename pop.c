#include "monty.h"

/**
 * pop - pop top item of stack
 * @stack: stack
 * Return: new stack
*/

stack_t *pop(stack_t **stack)
{
	stack_t *element;

	if (*stack !=  NULL)
	{
		element = (*stack)->next;
		free(*stack);

		if (element != NULL)
			element->prev = NULL;

		return (element);
	}

	return (NULL);
}
