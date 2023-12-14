#include "monty.h"

/**
 * op_pall - print all nodes
 * @stack: stack
 * @line_number: line number
*/

void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	data.n = line_number;

	if (temp == NULL)
		return;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
