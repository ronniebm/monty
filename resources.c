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
		perror("Unable to allocate params");
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
 * _strchr_count - it returns an address of first character match.
 * @s: char pointer variable.
 * @c: char to find.
 * Return: an address.
 */
int _strchr_count(char *s, char c)
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
void free_dlistint(stack_t *head)
{
	stack_t *aux = NULL;

	if (head != NULL)
	{
		while (head != NULL)
		{
			aux = head;
			head = (head)->next;
			free(aux);
		}
		head = NULL;
		aux = NULL;
	}
}

/**
 * get_op_func - selects the math operation type.
 * @s: operator simbol.
 * Return: pointer to specified function.
 */
void (*get_op_func(char *s))(stack_t **stack, unsigned int line_number)
{
	instruction_t ops[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{NULL, NULL}
	};

	int i = 0;

	if (s != NULL)
	{
	while (ops[i].opcode != NULL)
	{
		if (strcmp(s, ops[i].opcode) == 0)
			return (ops[i].f);
		i++;
	}
	}
	return (NULL);
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
