#include "monty.h"

/**
 * main - main function
 * @argc: number of args
 * @argv! list of args
 * Return: program end status
*/

int main(int argc, char *argv)
{
	stack_t *stack = NULL;

	printf("Hello World\n");

	pall(&stack);

	printf("\n---------------\n");

	stack = push(&stack, 1);
	stack = push(&stack, 2);
	stack = push(&stack, 3);
	pall(&stack);
	stack = pop(&stack);

	printf("\n---------------\n");
	pall(&stack);

	printf("\n---------------\n");

	clearStack(&stack);
	pall(&stack);

	return (0);
}
