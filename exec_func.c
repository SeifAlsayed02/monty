#include "monty.h"

/**
 * exec_func - execute the right function
 * @op_function: the right function of opcode
 * @opcode: operation that should be done
 * @value: value added to stack
 * @line_num: current line number that should be excuted
*/

void exec_func(op_func op_function, char *opcode, char *value, int line_num)
{
	int neg_val = 1, i;
	stack_t *node;

	if (strcmp(opcode, "push") == 0)
	{
		if (value && value[0] == '-')
		{
			neg_val = -1;
			value = value + 1;
		}
		if (!value)
			fprintf(stderr, "L%d: usage: push integer\n", line_num);

		for (i = 0; value[i] != '\0'; i++)
		{
			if (isdigit(value[i]) == 0)
				fprintf(stderr, "L%d: usage: push integer\n", line_num);
		}
		node = init_node(neg_val * atoi(value));

		op_function(&node, line_num);
	}
	else
		op_function(&head, line_num);
}
