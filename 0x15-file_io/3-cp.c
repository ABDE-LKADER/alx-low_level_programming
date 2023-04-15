#include "main.h"

/**
 * main - Entry point
 *
 * @argc: Input Number of Arguments
 * @argv: Input Arguments
 *
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int f_rd, f_wr, i, j, k;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_rd = open(argv[1], O_RDONLY);
	if (f_rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_wr = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(f_rd, buffer, BUFSIZ)) > 0)
	{
		if (f_wr < 0 || write(f_wr, buffer, i) != i)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(f_rd);
			exit(99);
		}
	}
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	j = close(f_rd);
	k = close(f_wr);
	if (j < 0 || k < 0)
	{
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_rd);
		if (k < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_wr);
		exit(100);
	}
	return (0);
}
