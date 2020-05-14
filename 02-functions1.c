#include "monty.h"

/**
* _push - it adds an element to a stack.
* @stack: db-pointer to a stack structure.
* @line_number: number of the line.
* Return: void.
*/
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	/*input error cases*/
	if (glb.strs_lines[1] == NULL || str_is_num(glb.strs_lines[1]) != 0)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		free_dlistint(stack);
		fclose(glb.fp);
		free(glb.line);
		free(glb.strs_lines);
		exit(EXIT_FAILURE);
	}

	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	node->n = atoi(glb.strs_lines[1]);
	node->prev = NULL;
	node->next = *stack;

	if (*stack != NULL)
	{
		(*stack)->prev = node;
	}

	*stack = node;
}


/**
* _pall - it prints a stack list.
* @stack: db-pointer to a stack structure.
* @line_number: number of the line.
* Return: void.
*/
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;
	temp = *stack;

	if (stack != NULL)
		while (temp)
		{
			fprintf(stdout, "%d\n", temp->n);
			temp = temp->next;
		}
}


/**
* _pint - Monty's pint function.
* @stack: db-pointer to a stack structure.
* @line_number: number of the line.
* Return: void.
*/
void _pint(stack_t **stack, unsigned int line_number)
{
	char string_line[20];
	stack_t *temp = *stack;

	sprintf(string_line, "%d", line_number);
	if (*stack)
		printf("%d\n", temp->n);
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free_dlistint(stack);
		fclose(glb.fp);
		free(glb.line);
		free(glb.strs_lines);
		exit(EXIT_FAILURE);
	}
}


/**
* _pop - it deletes an element in a stack.
* @stack: db-pointer to a stack structure.
* @line_number: number of the line.
* Return: void.
*/
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	char string_line[20];

	sprintf(string_line, "%d", line_number);
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free_dlistint(stack);
		fclose(glb.fp);
		free(glb.line);
		free(glb.strs_lines);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next != NULL)
	{
		*stack = (*stack)->next;
		(*stack)->prev = NULL;
	}
	else
		*stack = NULL;
	free(temp);
}


/**
* _swap - it swaps two elements.
* @stack: db-pointer to a stack structure.
* @line_number: number of the line.
* Return: void.
*/
void _swap(stack_t **stack, unsigned int line_number)
{
	int val;
	char string_line[20];

	sprintf(string_line, "%d", line_number);
	if ((*stack) && (*stack)->next)
	{
		val = (*stack)->next->n;
		(*stack)->next->n = (*stack)->n;
		(*stack)->n = val;
	}
	else
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		free_dlistint(stack);
		fclose(glb.fp);
		free(glb.line);
		free(glb.strs_lines);
		exit(EXIT_FAILURE);
	}
}
