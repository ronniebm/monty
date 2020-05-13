#include "monty.h"

/**
 * main - main funtion
 * @argc: number of arguments
 * @argv: argumens passed to funtion in not interactive mode
 * Return: Always a inter number
 */

int main(int argc, char **argv)
{
	char *code = NULL, **n_lines, **strs;
	stack_t *head = NULL;
	void (*fun)(stack_t **stack, unsigned int line_number);

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
		strs = split_string(*n_lines, DELIMIT, _strchr_count(*n_lines, ' '));
		/* print_dp(strs);*/
		fun = get_op_func(strs[0]);
		/* CONDICIONAL PARA VALIDAR */
		if (fun != NULL)
		{
			fun(&head, 8);
		}
		n_lines++;
		/* free_dp(strs); */
	}
	return (0);
}
