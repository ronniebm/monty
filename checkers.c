#include "monty.h"
glb_v glb;

/**
 * 
 * 
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