#include "monty.h"
glb_v glb;
/**
 * str_is_num - check if string is numeric pos or neg.
 * @str: pointer to a string.
 * Return: 0 if numeric, other value > 0 if not numeric.
 */
int str_is_num(char *str)
{
	int i = 0;
	int counter = 0;

	/*checking negative sign*/
	if (str[0] == '-')
		i = 1;

	while (str[i] != '\0')
	{
		if (isdigit(str[i]) == 0)
			counter++;
		i++;
	}
	return (counter);
}
