#include "monty.h"

/**
* sub_stack - subtracts the top two elements of the stack.
* @stack: Pointer to a pointer pointing to top node of the stack.
* @line_number: line number of  the opcode.
*/

void sub_stack(stack_t **stack, unsigned int line_number)
{
		int tmp1;

		int tmp2;

		int sum;

		if (*stack == NULL || stack == NULL || (*stack)->next == NULL)
		{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
		}

		tmp1 = (*stack)->n;
		tmp2 = (*stack)->next->n;
		sum = tmp2 - tmp1;

		(*stack) = (*stack)->next;
		(*stack)->n = sum;
		free((*stack)->prev);
		(*stack)->prev = NULL;
}
