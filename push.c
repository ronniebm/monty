#include "monty.h"

/**
* _push - it adds an element to a stack.
* @stack: db-pointer to a stack structure.
* @line_number: number of the line.
* Return: void.
*/
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	/*input error cases*/
	if (glb.strs_lines[1] == NULL || str_is_num(glb.strs_lines[1]) != 0)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit_program();
	}

	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	node->n = atoi(glb.strs_lines[1]);
	node->prev = NULL;
	node->next = *stack;

	if (*stack != NULL)
	{
		(*stack)->prev = node;
	}

	*stack = node;
}
