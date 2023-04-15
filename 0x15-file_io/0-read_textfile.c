#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 *
 * @filename: Input Name File
 * @letters: Input Number
 *
 * Return: Depend Condition
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_op, f_rd, f_wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	f_op = open(filename, O_RDONLY);
	if (f_op < 0)
		return (0);
	buffer = (char *) malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);
	f_rd = read(f_op, buffer, letters);
	if (f_rd < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[f_rd] = '\0';
	f_wr = write(STDOUT_FILENO, buffer, f_rd);
	if (f_wr < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(f_op);
	return (f_wr);
}
