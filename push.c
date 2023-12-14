#include "monty.h"

/**
 * push - add new node to stak
 * @stack: stack
 * @x: new node value
 * Return: New stack
*/

stack_t *push(stack_t **stack, int x)
{
	stack_t *element;

	element = malloc(sizeof(*element));

	if (element == NULL)
		exit(EXIT_FAILURE);

	element->n = x;
	element->prev = NULL;

	if (*stack == NULL)
		element->next = NULL;
	else
	{
		element->next = *stack;
		(*stack)->prev = element;
	}

	return (element);
}
