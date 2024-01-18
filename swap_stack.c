#include "monty.h"

/**
 * swap_stack - waps the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: line number of  the opcode.
 */

void swap_stack(stack_t **stack, unsigned int line_number)
{
	int tmp;

	if (*stack == NULL || stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->n;

	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = tmp;
}
