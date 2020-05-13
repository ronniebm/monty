#include "monty.h"

/**
 * read_textfile - funtion for read file
 * @filename: name of file
 * @letters: length of character to read in the file
 * Return: number the character reads
 */
char *read_textfile(const char *filename, size_t letters)
{
	int fb, read_int;
	/* best practique is better usar malloc that array */
	char *buf = (char *)malloc(sizeof(char) * letters);

	/* if failure malloc o the string filename is null return o */
	if (filename == NULL || buf == NULL)
		return (0);

	/* if fauilure open file return 0 */
	fb = open(filename, O_RDONLY);
	if (fb == -1)
		return (0);
	
	/* if fauilure read file return 0 */
	//read_int = getline(&buf, &buff_size, fb);
	read_int = read(fb, buf, letters);
	if (read_int == -1)
		return (0);

	/* add null caracter for indicate finish of string */
	buf[read_int] = '\0';
	close(fb);

	return (buf);
}


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