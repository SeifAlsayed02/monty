#include "monty.h"

/**
 * push_stack - Adds a node to the stack.
 * @stack: Pointer to the new node.
 * @line_number: Interger representing the line number of of the opcode.
 */

void push_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_stack;

	(void)line_number;

	if (!stack || !(*stack))
		exit(EXIT_FAILURE);
	if (!head)
	{
		head = *stack;
		return;
	}

	temp_stack = head;
	head = *stack;
	head->next = temp_stack;
	temp_stack->prev = head;
}
