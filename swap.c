#include "monty.h"

/**
* _swap - it swaps two elements.
* @stack: db-pointer to a stack structure.
* @line_number: number of the line.
* Return: void.
*/
void _swap(stack_t **stack, unsigned int line_number)
{
	int val;

	if ((*stack) && (*stack)->next)
	{
		val = (*stack)->next->n;
		(*stack)->next->n = (*stack)->n;
		(*stack)->n = val;
	}
	else
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit_program();
	}
}
