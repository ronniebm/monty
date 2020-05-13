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
	unsigned int count_line = 0;

	glb.argvs = argv;
	glb.argc = argc;
	check_argc();
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		dprintf(2, "Error: Can't open file %s", glb.argvs[1]);
		exit(EXIT_FAILURE);
	}
	/* step 2: read the first line in the file */
	read = getline(&line, &bufer_len, fp);
	/* read each line of file opened */
	while (read >= 0)
	{
		count_line++;
		glb.strs_lines = split_string(line, DELIMIT, _strchr_count(line, ' '));
		glb.fun.f = get_op_func(glb.strs_lines[0]);
		if (glb.fun.f == NULL)
		{
			printf("L%d: unknown instruction %s\n", count_line, glb.strs_lines[0]);
			fclose(fp);
			free(line);
			free(glb.strs_lines);
			exit(EXIT_FAILURE);
		}
		glb.fun.f(&head, count_line);
		read = getline(&line, &bufer_len, fp);
		free(glb.strs_lines);
	}
	free_dlistint(head);
	fclose(fp);
	free(line);
	return (0);
}
