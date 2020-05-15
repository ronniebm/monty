#include "monty.h"

/**
* _pall - it prints a stack list.
* @stack: db-pointer to a stack structure.
* @line_number: number of the line.
* Return: void.
*/
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;
	temp = *stack;

	if (stack != NULL)
		while (temp)
		{
			fprintf(stdout, "%d\n", temp->n);
			temp = temp->next;
		}
}
