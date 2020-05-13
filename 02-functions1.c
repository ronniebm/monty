#include "monty.h"

/**
* _push - it adds an element to a stack.
* @stack: db-pointer to a stack structure.
* @line_number: number of the line.
* Return: void.
*/
void _push(stack_t **stack, unsigned int line_number)
{
	//(void)stack;
	//(void)line_number;
	//printf("funtion _push\n");
	stack_t *node;
	char *num;

	num = strtok(NULL, DELIMS);
	if (num == NULL)
	{
		printf("L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	node->n = atoi(num);
	node->prev = NULL;
	node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = node;

	*stack = node;
}


/**
* _pall - it prints a list.
* @stack: db-pointer to a stack structure.
* @line_number: number of the line.
* Return: void.
*/
void _pall(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	printf("funtion _pall\n");
}


/**
* _pint - Monty's pint function.
* @stack: db-pointer to a stack structure.
* @line_number: number of the line.
* Return: void.
*/
void _pint(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	printf("funtion _pint\n");
}


/**
* _pop - it deletes an element in a stack.
* @stack: db-pointer to a stack structure.
* @line_number: number of the line.
* Return: void.
*/
void _pop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	printf("funtion _pop\n");
}


/**
* _swap - it swaps two elements.
* @stack: db-pointer to a stack structure.
* @line_number: number of the line.
* Return: void.
*/
void _swap(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	printf("funtion _swap\n");
}
