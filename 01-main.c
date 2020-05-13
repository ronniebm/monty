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
	FILE *fp = NULL;
	ssize_t read = 0;
	size_t bufer_len = 0;
	char *line = NULL;
	stack_t *head = NULL;
	glb.argvs = argv;
	glb.argc = argc;
	unsigned int count_line = 0;
	
	if (check_argc() == 1)
	{
		dprintf(2, "Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	/* paso 1, open file */
	if ((fp = fopen(argv[1], "r")) == NULL)
	{
		dprintf(2, "Error: Can't open %s", glb.argvs[1]);
		exit(EXIT_FAILURE);
	}

	/* step 2: read the first line in the file */
	read = getline(&line, &bufer_len, fp);
	/* read each line of file opened */
	while (read >= 0)
	{
		count_line++;
		//printf("line number %d is\n", count_line);
		//printf("%s", line);

		glb.strs_lines = split_string(line, DELIMIT, _strchr_count(line, ' '));
		//print_dp(glb.strs_lines);
		glb.fun.f = get_op_func(glb.strs_lines[0]);
		/* CONDICIONAL PARA VALIDAR */
		if (glb.fun.f != NULL)
		{
			glb.fun.f(&head, count_line);

		}
		read = getline(&line, &bufer_len, fp);
		free(glb.strs_lines);
	}
	fclose(fp);
	free(line);
	free_dlistint(head);
	return (0);
}
