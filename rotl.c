#include "monty.h"

/**
 * _rotl - rotates the stack to the top
 * of the stack.
 * @stack: db-pointer to a stack structure.
 * @line_number: number of the line.
 *
 * Return: void
 */
void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *new_top;
	(void) line_number;

	/*test cases to return*/
	if (!stack || !(*stack) || !(*stack)->next)
		return;

	temp = *stack;

	new_top = temp->next;
	new_top->prev = NULL;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = temp;
	*stack = new_top;
}
