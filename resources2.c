#include "monty.h"
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

/**
 * stack_len - funtion for measure length single linked list
 * Return: number of elemt in the linked lis
 */

size_t stack_len(void)
{
	size_t i = 0;
	stack_t *aux;

	aux = glb.head;
	while (aux != NULL)
	{
		aux = aux->next;
		i++;
	}

	return (i);
}
