#include "monty.h"

/**
* _pop - it deletes an element in a stack.
* @stack: db-pointer to a stack structure.
* @line_number: number of the line.
* Return: void.
*/
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	char string_line[20];

	sprintf(string_line, "%d", line_number);
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit_program();
	}
	if ((*stack)->next != NULL)
	{
		*stack = (*stack)->next;
		(*stack)->prev = NULL;
	}
	else
		*stack = NULL;
	free(temp);
}
