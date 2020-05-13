#include "monty.h"
glb_v glb;

/**
 * _add - it adds an element.
 * @stack: db-pointer to a stack structure.
 * @line_number: number of the line.
 * Return: void.
 */
void _add(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	printf("_add in argv0 is %s y argv1 is %s\n", glb.strs_lines[0], glb.strs_lines[1]);
}


/**
 * _nop - Monty's Nop function.
 * @stack: db-pointer to a stack structure.
 * @line_number: number of the line.
 * Return: void.
 */
void _nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	printf("_nop in argv0 is %s y argv1 is %s\n", glb.strs_lines[0], glb.strs_lines[1]);
}
