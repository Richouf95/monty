#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct data_s - forward data
 * @op: the opcode
 * @x: node value
 * @n: line number
 * @stack: stack
 *
 * Description: opcode and node value
 * for something
*/
typedef struct data_s
{
	char *op;
	int x;
	unsigned int n;
	stack_t **stack;
} data_t;

data_t data;

/**
 * Prototypes - rfd
 * @stack: stack
 * @line_number: line number
*/

void op_push(stack_t **stack, unsigned int line_number);
void addNode(stack_t **stack, int x);
void op_pall(stack_t **stack, unsigned int line_number);
void op_pop(stack_t **stack, unsigned int line_number);
void free_stack(stack_t **stack);
void readMonty(char *fileName);
int _atoi(char *s);

#endif
