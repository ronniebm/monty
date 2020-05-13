#include "monty.h"
/**
 * check_argc - main funtions
 * Return: integer number
 */
int check_argc(void)
{
	if (glb.argc != 2)
	{
		dprintf(2, "Usage: monty filename\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}
