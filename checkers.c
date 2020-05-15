#include "monty.h"

/**
 * check_argc - main funtions
 * @argc: number of arguments
 * Return: integer number
 */
int check_argc(int argc)
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: monty filename\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}
