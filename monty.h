#ifndef _MONTY_H_
#define _MONTY_H_
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <ctype.h>
#include <fcntl.h>

#define bool short
#define true 1
#define false 0
#define fail -1

#define DELIM " \n"


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
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
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *head;
typedef void (*op_func)(stack_t **, unsigned int);


stack_t *init_node(int val);
void free_all_nodes(void);

void get_opcode_val(char *buff, int line_num);
void get_op_function(char *opcode, char *value, int line_num);
void exec_func(op_func op_function, char *opcode, char *value, int line_num);
void push_stack(stack_t **stack, unsigned int line_number);
void print_stack(stack_t **stack, unsigned int line_number);
void print_top_stack(stack_t **stack, unsigned int line_number);
void pop_stack(stack_t **stack, unsigned int line_number);
void swap_stack(stack_t **stack, unsigned int line_number);
void add_stack(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
#endif
