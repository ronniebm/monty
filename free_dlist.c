#include "monty.h"

/**
 * free_dlistint - free double linked list
 * @head: head of linked list
 * Return: void
 */
void free_dlistint(stack_t **head)
{
	stack_t *aux = NULL;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			aux = (*head);
			*head = (*head)->next;
			free(aux);
		}
		head = NULL;
		aux = NULL;
	}
}
