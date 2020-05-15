#include "monty.h"

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
