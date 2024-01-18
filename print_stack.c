#include "monty.h"

/**
 * print_stack - Adds a node to the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: line number of  the opcode.
 */

void print_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_stack;

	(void) line_number;

	if (stack == NULL)
		exit(EXIT_FAILURE);

	temp_stack = *stack;

	while (temp_stack)
	{
		printf("%d\n", temp_stack->n);
		temp_stack = temp_stack->next;
	}
}
