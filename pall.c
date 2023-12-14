#include "monty.h"

/**
 * op_pall - print all nodes
 * @stack: stack
*/

void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	while (temp)
	{
		if (!temp->n)
			printf("line_number : %u", line_number);
		else
			printf("%d\n", temp->n);
		temp = temp->next;
	}
}
