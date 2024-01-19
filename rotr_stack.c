#include "monty.h"

/**
* rotr_stack - rotates the stack to the top.
* @stack: Pointer to a pointer pointing to top node of the stack.
* @line_number: line number of  the opcode.
*/

void rotr_stack(stack_t **stack, unsigned int line_number)
{
		stack_t *last, *temp;
		(void) line_number;

		if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return;

		last = *stack;
		while (last->next != NULL)
			last = last->next;

		temp = last->prev;
		temp->next = NULL;
		last->prev = NULL;

		last->next = *stack;
		last->prev = NULL;
		(*stack)->prev = last;

		*stack = last;

}
