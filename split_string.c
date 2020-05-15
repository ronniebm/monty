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
