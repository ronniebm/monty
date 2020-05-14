#include "monty.h"
/**
* _mod - computes the rest of the division of the second top
* @stack: db-pointer to a stack structure.
* @line_number: number of the line.
* Return: void.
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	int num;
	stack_t *top_elemnt = NULL;

	if (stack_len() >= 2)
	{
		if ((*stack)->n == 0)
		{
			fprintf(stderr, "L%d: division by zero\n", line_number);
			exit_program();
		}
		top_elemnt = (*stack);
		(*stack) = (*stack)->next;
		num = ((*stack)->n) % (top_elemnt->n);
		(*stack)->n = num;
		free(top_elemnt);
		(*stack)->prev = NULL;
		top_elemnt = NULL;
	}
	else
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit_program();
	}
}
