#include "monty.h"

/**
 * split_string - it separates an string.
 *
 * @string: it receives a string's memory allocation.
 * @delimiter: character delimiter for splitting.
 * @buffer: size of the buffer.
 * Return: an address of a pointer to char.
 */
char **split_string(char *string, char *delimiter, int buffer)
{
	int count = 0;
	char *token;
	char **params = malloc(buffer * sizeof(char *));

	if (params == NULL)
	{
		fprintf(stderr, "Unable to allocate params");
		return (NULL);
	}
	token = strtok(string, delimiter);
	while (token != NULL)
	{
		params[count] = token;
		token = strtok(NULL, delimiter);
	count++;
	}
	params[count] = NULL;
	return (params);
}

/**
 * count_chr - it returns an address of first character match.
 * @s: char pointer variable.
 * @c: char to find.
 * Return: an address.
 */
int count_chr(char *s, char c)
{
int i = 0, count = 0;

while (s[i] != '\0')
{
	if (s[i] == c)
	count++;
	i++;
}
return (count + 3); /*se suma 3 adicional*/
}

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

/**
 * get_op_func - selects the math operation type.
 * @s: operator simbol.
 * @n_line: number of line in the code.
 * Return: pointer to specified function.
 */
void get_op_func(char *s, unsigned int n_line)
{
	instruction_t ops[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{"stack", _stack},
		{NULL, NULL}
	};

	int i = 0;

	if (s != NULL)
	{
		while (ops[i].opcode != NULL)
		{
			if (strcmp(s, ops[i].opcode) == 0)
			{
				ops[i].f(&glb.head, n_line);
				return;
			}
			i++;
		}
		if (strlen(s) != 0 && s[0] != '#')
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", n_line, s);
			exit_program();
		}
	}
}

/**
 * print_dp - prints content of dpointer.
 * @dp: double pointer.
 * Return: void.
 */
void print_dp(char **dp)
{
	int i = 0;

	printf("\n*******start********\n");
	while (dp[i] != NULL)
	{
		printf("%s\n", dp[i]);
		i++;
	}
	printf("\n*******stop********\n");
}
