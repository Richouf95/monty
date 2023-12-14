#include "monty.h"

/**
 * pall - print stack items
 * @stack: stack
*/

void pall(stack_t **stack)
{
	stack_t *temp = *stack;

	if (temp == NULL)
	{
		printf("Rien a afficher\n");
		return;
	}

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
