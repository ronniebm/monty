#include "monty.h"

/**
* _pint - Monty's pint function.
* @stack: db-pointer to a stack structure.
* @line_number: number of the line.
* Return: void.
*/
void _pint(stack_t **stack, unsigned int line_number)
{
	char string_line[20];
	stack_t *temp = *stack;

	sprintf(string_line, "%d", line_number);
	if (*stack)
		printf("%d\n", temp->n);
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit_program();
	}
}
