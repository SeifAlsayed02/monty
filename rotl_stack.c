#include "monty.h"

/**
* rotl_stack - rotates the stack to the top.
* @stack: Pointer to a pointer pointing to top node of the stack.
* @line_number: line number of  the opcode.
*/

void rotl_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_stack_1;
	stack_t *temp_stack_2;

		(void) line_number;

		if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return;

		temp_stack_1 = *stack;
	temp_stack_2 = *stack;

	while (temp_stack_2->next)
		temp_stack_2 = temp_stack_2->next;

	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	temp_stack_1->next = NULL;
	temp_stack_1->prev = temp_stack_2;
	temp_stack_2->next = temp_stack_1;
}
