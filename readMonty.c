#include "monty.h"

/**
 * readMonty - read monty file
 * @fileName: file name
*/

void readMonty(char *fileName)
{
	char line[25];
	char op[25];
	int i;
	instruction_t listFunctions[] = {{"push", op_push}, {"pop", op_pop}, {"pall", op_pall}};

	FILE *file = fopen(fileName, "r");

	if (file == NULL)
		exit(EXIT_FAILURE);

	while (fgets(line, sizeof(line), file) != NULL)
	{
		if (sscanf(line, "%s", op) == 1)
		{
			data.op = op;
			data.x = _atoi(line);
			printf("%s\n", line);
			printf("\t=>\t%s\n", data.op);
			printf("\t=>\t%d\n", data.x);
			for (i = 0; listFunctions[i].opcode != NULL; i++)
			{
				if (strcmp(listFunctions[i].opcode, data.op) == 0)
				{
					listFunctions[i].f(data.stack, 0);
					/*printf("\n+++++\n\tTu dois %s\n+++++\n", listFunctions[i].opcode);*/
					break;
				}
			}
		}
	}

	fclose(file);
}
