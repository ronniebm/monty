#include "monty.h"
glb_v glb;

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
		return (NULL);

	/* if fauilure open file return 0 */
	if (fb = fopen(filename, "r") == -1)
	{
		dprintf(2, "Error: Can't open %s", glb.strs_lines[0]);
		return (NULL);
	}
	
	/* if fauilure read file return 0 */
	//read_int = getline(&buf, &buff_size, fb);
	read_int = read(fb, buf, letters);
	if (read_int == -1)
		return (NULL);

	/* add null caracter for indicate finish of string */
	buf[read_int] = '\0';
	close(fb);

	return (buf);
}