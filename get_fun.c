#include "monty.h"

/**
 * get_op_func - selects the math operation type.
 * @s: operator simbol.
 * @n_line: number of line in the code.
 * Return: pointer to specified function.
 */
void get_op_func(char *s, unsigned int n_line)
{
	instruction_t ops[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{"stack", _stack},
		{NULL, NULL}
	};

	int i = 0;

	if (s != NULL)
	{
		while (ops[i].opcode != NULL)
		{
			if (strcmp(s, ops[i].opcode) == 0)
			{
				ops[i].f(&glb.head, n_line);
				return;
			}
			i++;
		}
		if (strlen(s) != 0 && s[0] != '#')
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", n_line, s);
			exit_program();
		}
	}
}
