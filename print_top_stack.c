#include "monty.h"
/**
 * print_top_stack - Prints the top of stack
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: line number of  the opcode.
 */

void print_top_stack(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_num);
		exit(EXIT_FAILURE);
	}

	while (temp_stack)
		printf("%d\n", (*stack)->n);
}
