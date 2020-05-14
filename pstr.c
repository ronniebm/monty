#include "monty.h"

/**
 * _pstr - print string from stack's top + new line.
 * @stack: db-pointer to a stack structure.
 * @line_number: number of the line.
 *
 * Return: void
 */
void _pstr(stack_t **stack, unsigned int line_number)
{
	/*it doesn' print error*/
	(void) line_number;
	stack_t *aux;
	
	aux = *stack;
	while (aux)
	{
		if (aux->n != 0 && isascii(aux->n))
			putchar(aux->n);
		else
			break;

		aux = aux->next;
	}
	putchar('\n');
}
