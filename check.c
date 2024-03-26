#include "monty.h"

/**
 *
*/

int containInst(instruction_t inst[], int instSize, char *op)
{
	int i;

	for (i = 0; i < instSize; i++)
	{
		if (strcmp(inst[i].opcode, op) == 0)
			return (1);
	}

	return (0);
}
