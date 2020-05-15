#include "monty.h"

/**
 * exit_program - safe close process.
 * Return: void funtion.
 */
void exit_program(void)
{
	free_dlistint(&glb.head);
	fclose(glb.fp);
	free(glb.line);
	free(glb.strs_lines);
	exit(EXIT_FAILURE);
}
