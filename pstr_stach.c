#include "monty.h"

/**
* pstr_stack - prints the string starting at the
* top of the stack, followed by a new line.
* @stack: Pointer to a pointer pointing to top node of the stack.
* @line_number: line number of  the opcode.
*/

void pstr_stack(stack_t **stack, unsigned int line_number)
{
		stack_t *temp_stack;

		(void) line_number;

		if (stack == NULL || *stack == NULL)
	{
		printf("\n");
		return;
	}

		temp_stack = *stack;

		while (temp_stack)
		{
		if (temp_stack->n <= 0 || temp_stack->n > 127)
			break;
				printf("%c", temp_stack->n);
				temp_stack = temp_stack->next;
		}
	 printf("\n");
}
