#include "monty.h"

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
