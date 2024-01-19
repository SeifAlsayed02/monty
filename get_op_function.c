#include "monty.h"

/**
 * get_op_function - get the right function and excute the function
 * @opcode: operation that should be done
 * @value: value added to stack
 * @line_num: current line number that should be excuted
*/

void get_op_function(char *opcode, char *value, int line_num)
{
	int i;

	bool is_valid_instruction = false;

	instruction_t op_functions[] = {
		{"push", push_stack},
		{"pall", print_stack},
		{"pint", print_top_stack},
		{"pop", pop_stack},
		{"swap", swap_stack},
		{"add", add_stack},
		{"nop", nop},
		{"sub", sub_stack},
		{"div", div_stack},
		{"mul", mul_stack},
		{"mod", mod_stack},
		{"pchar", pchar_stack},
		{"pstr", pstr_stack},
		{"rotl", rotl_stack},
		{"rotr", rotr_stack},
		{NULL, NULL}
	};

	if (opcode[0] == '#')
		return;

	for (i = 0; op_functions[i].opcode != NULL; i++)
	{
		if (strcmp(opcode, op_functions[i].opcode) == 0)
		{
			exec_func(op_functions[i].f, opcode, value, line_num);
			is_valid_instruction = true;
		}
	}

	if (!is_valid_instruction)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_num, opcode);
		exit(EXIT_FAILURE);
	}
}
