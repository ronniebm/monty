#include "monty.h"

/**
 * main - main funtion
 * @argc: number of arguments
 * @argv: argumens passed to funtion in not interactive mode
 * Return: Always a inter number
 */
int main(int argc, char **argv)
{
	ssize_t read = 0;
	size_t bufer_len = 0;
	stack_t *head = NULL;
	unsigned int count_line = 0;

	glb.line = NULL;
	check_argc(argc);

	glb.fp = fopen(argv[1], "r");
	if (glb.fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s", argv[1]);
		exit(EXIT_FAILURE);
	}
	/* step 2: read the first line in the file */
	/* read each line of file opened */
	while ((read = getline(&glb.line, &bufer_len, glb.fp)) >= 0)
	{
		count_line++;
		glb.strs_lines = split_string(glb.line, DELIMIT, count_chr(glb.line, ' '));
		get_op_func(glb.strs_lines[0], count_line, &head);
		free(glb.strs_lines);
	}
	free_dlistint(&head);
	fclose(glb.fp);
	free(glb.line);
	return (0);
}
