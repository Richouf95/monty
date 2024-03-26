#include "monty.h"

/**
 * readMonty - read monty file
 * @fileName: file name
*/

void readMonty(char *fileName)
{
	char line[25];
	char op[25];
	int i, j = 0;
	unsigned int n = 1;
	instruction_t listFunctions[] = {
		{"push", op_push}, {"pop", op_pop}, {"pall", op_pall},
		{"pint", op_pint}, {NULL, NULL}
	};
	int listSize = sizeof(listFunctions) / sizeof(listFunctions[0]);
	
	FILE *file = fopen(fileName, "r");

	printf("listSize : %d", listSize);

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", fileName);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, sizeof(line), file) != NULL)
	{
		if (sscanf(line, "%s", op) == 1)
		{
			data.op = op;
			data.x = _atoi(line);
			for (i = 0; listFunctions[i].opcode != NULL; i++)
			{
				if (strcmp(listFunctions[i].opcode, data.op) == 0)
				{
					if (strcmp(data.op, "push") == 0 && data.x == 90500715)
					{
						fprintf(stderr, "L%d: usage: push integer\n", n);
						free_stack(data.stack);
						fclose(file);
						exit(EXIT_FAILURE);
					}
					listFunctions[i].f(data.stack, n);
					break;
				}
				if (j == listSize -1)
				{
					fprintf(stderr, "L%u: unknown instruction %s\n", n, op);
					free_stack(data.stack);
					fclose(file);
					exit(EXIT_FAILURE);
				}
				j++;
			}
		}
		n++;
	}

	fclose(file);
}
