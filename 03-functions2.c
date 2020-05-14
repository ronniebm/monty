#include "monty.h"

/**
 * _add - it adds an element.
 * @stack: db-pointer to a stack structure.
 * @line_number: number of the line.
 * Return: void.
 */
void _add(stack_t **stack, unsigned int line_number)
{
	int result;
	stack_t *temp = *stack;
	char string_line[20];

	sprintf(string_line, "%d", line_number);
	if ((*stack) && (*stack)->next)
	{
		result = (*stack)->next->n;
		result += (*stack)->n;
		(*stack)->next->n = result;
		(*stack) = (*stack)->next;
		(*stack)->prev = NULL;
		free(temp);
	}
	else
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free_dlistint(stack);
		fclose(glb.fp);
		free(glb.line);
		free(glb.strs_lines);
		exit(EXIT_FAILURE);
	}
}

/**
 * _nop - Monty's Nop function.
 * @stack: db-pointer to a stack structure.
 * @line_number: number of the line.
 * Return: void.
 */
void _nop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
