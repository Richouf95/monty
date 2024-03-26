#include "monty.h"

/**
 * addNode - function to add new node
 * @stack: stack
 * @x: node value
*/

void addNode(stack_t **stack, int x)
{
	stack_t *newNode;
	stack_t *temp = *stack;

	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	newNode->n = x;

	if (temp != NULL)
		temp->prev = newNode;

	newNode->next = *stack;
	newNode->prev = NULL;
	*stack = newNode;
}
