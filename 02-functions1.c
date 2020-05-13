#include "monty.h"
glb_v glb;
/**
* _push - it adds an element to a stack.
* @stack: db-pointer to a stack structure.
* @line_number: number of the line.
* Return: void.
*/
void _push(stack_t **stack, unsigned int line_number)
{
  (void)stack;
	(void)line_number;
	printf("_push in argv0 is %s y argv1 is %s\n", glb.strs_lines[0], glb.strs_lines[1]);
}


/**
* _pall - it prints a list.
* @stack: db-pointer to a stack structure.
* @line_number: number of the line.
* Return: void.
*/
void _pall(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	printf("_pall in argv0 is %s y argv1 is %s\n", glb.strs_lines[0], glb.strs_lines[1]);
}


/**
* _pint - Monty's pint function.
* @stack: db-pointer to a stack structure.
* @line_number: number of the line.
* Return: void.
*/
void _pint(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	printf("_pint in argv0 is %s y argv1 is %s\n", glb.strs_lines[0], glb.strs_lines[1]);
}


/**
* _pop - it deletes an element in a stack.
* @stack: db-pointer to a stack structure.
* @line_number: number of the line.
* Return: void.
*/
void _pop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	printf("_pop in argv0 is %s y argv1 is %s\n", glb.strs_lines[0], glb.strs_lines[1]);
}


/**
* _swap - it swaps two elements.
* @stack: db-pointer to a stack structure.
* @line_number: number of the line.
* Return: void.
*/
void _swap(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	printf("_swap in argv0 is %s y argv1 is %s\n", glb.strs_lines[0], glb.strs_lines[1]);
}
