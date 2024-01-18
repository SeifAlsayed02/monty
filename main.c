#include "monty.h"

/**
* main - Entry point
* @argc: number of arguments
* @argv: arguments passed
*
* Return: Always 0 (success)
*/

stack_t *head = NULL;

int main(int argc, char *argv[])
{
	FILE *input_file;
	int line_num = 1;
	size_t n = 0;

	char *buff = NULL;


	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	input_file = fopen(argv[1], "r");

	if (!argv[1] || !input_file)
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);


	/*read line*/
	while (getline(&buff, &n, input_file) != -1)
	{
		get_opcode_val(buff, line_num);
		line_num++;
	}

	fclose(input_file);

	free(buff);
	free_all_nodes();

	return (0);
}
