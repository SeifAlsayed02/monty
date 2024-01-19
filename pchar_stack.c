#include "monty.h"
/**
* pchar_stack - Prints the top char of stack
* @stack: Pointer to a pointer pointing to top node of the stack.
* @line_number: line number of  the opcode.
*/

void pchar_stack(stack_t **stack, unsigned int line_number)
{

		if (stack == NULL || *stack == NULL)
				{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
				}

	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
	}
				printf("%c\n", (*stack)->n);
}
