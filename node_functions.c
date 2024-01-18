#include "monty.h"

/**
 * init_node - create new node
 * @val: value to add to node
 *
 * Return: node ceated
*/

stack_t *init_node(int val)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (!node)
		fprintf(stderr, "Error: malloc failed\n");

	node->n = val;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}

/**
 * free_all_nodes - free all the stack nodes
 * Retur: None
*/

void free_all_nodes(void)
{
	stack_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
