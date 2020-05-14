#include "monty.h"

/**
 * _add - it adds an element.
 * @stack: db-pointer to a stack structure.
 * @line_number: number of the line.
 * Return: void.
 */
void _add(stack_t **stack, unsigned int line_number)
{
	char *s1, *s2;

	s1 = glb.strs_lines[0];
	s2 = glb.strs_lines[1];

	if (*stack == NULL && line_number != 80)
		printf("_add in argv0 is %s y argv1 is %s\n", s1, s2);
}

/**
 * _nop - Monty's Nop function.
 * @stack: db-pointer to a stack structure.
 * @line_number: number of the line.
 * Return: void.
 */
void _nop(stack_t **stack, unsigned int line_number)
{
	char *s1, *s2;

	s1 = glb.strs_lines[0];
	s2 = glb.strs_lines[1];

	if (*stack == NULL && line_number != 80)
		printf("_nop in argv0 is %s y argv1 is %s\n", s1, s2);
}
