#include "monty.h"
glb_v glb;

/**
 * main - main funtion
 * @argc: number of arguments
 * @argv: argumens passed to funtion in not interactive mode
 * Return: Always a inter number
 */

int main(int argc, char **argv)
{
	char *code = NULL, **n_lines;
	stack_t *head = NULL;
	
	if (argc != 2)
	{
		dprintf(2, "Usage: %s filename\n", argv[0]);
		exit(1);
	}
	/* paso 1 */
	code = read_textfile(argv[1], 1024);

	/* split each line of the file */
	n_lines = split_string(code, "\n", _strchr_count(code, '\n'));
	/* split in string each line of the file */
	while (*n_lines != NULL)
	{
		glb.strs_lines = split_string(*n_lines, DELIMIT, _strchr_count(*n_lines, ' '));
		/* print_dp(strs);*/
		glb.fun.f = get_op_func(glb.strs_lines[0]);
		/* CONDICIONAL PARA VALIDAR */
		if (glb.fun.f != NULL)
		{
			glb.fun.f(&head, 8);

		}
		n_lines++;
		/* free_dp(strs); */
	}
	return (0);
}
