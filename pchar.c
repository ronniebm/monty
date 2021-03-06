#include "monty.h"

/**
 * _pchar - print char at the top of the stack, followed by a new line.
 * @stack: double pointer to stack's head.
 * @line_number: the number of the line in the file.
 * Return: void
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	int num;
	/* test cases*/
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit_program();
	}
	num = (*stack)->n;
	/*isascii works with lib. ctype.h*/
	/*if not ascii then error! */
	if (!isascii(num))
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit_program();
	}
	fprintf(stdout, "%c\n", num);
}
