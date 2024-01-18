#include "monty.h"

/**
 * pop_stack - Remove the top of stack
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: line number of  the opcode.
 */

void pop_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_stack;

	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp_stack = *stack;
	*stack = temp_stack->next;

	while (*stack)
	{
		(*stack)->prev = NULL;
	}
	free(temp_stack);
}
