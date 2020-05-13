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
		dprintf(2, "Usage: %s filename\n", glb.argvs[0]);
		return (1);
	}
	return (0);
}