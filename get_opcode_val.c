#include "monty.h"

/**
 * get_opcode_val - split opcode and number from
 * line and get the right function
 * @buff: buffer containing the operation
 * @line_num: current line number that should be excuted
*/

void get_opcode_val(char *buff, int line_num)
{
	char *opcode, *num;

	if (buff == NULL)
		fprintf(stderr, "Error: malloc failed\n");

	opcode = strtok(buff, DELIM);
	if (opcode == NULL)
		return;
	num = strtok(NULL, DELIM);

	get_op_function(opcode, num, line_num);

}
