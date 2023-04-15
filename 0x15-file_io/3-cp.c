#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int fd;
	ssize_t nletters;
	char *filename;
	char *text_content;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	filename = argv[1];
	text_content = argv[2];
	nletters = 0;
	printf("-> %s file created\n", filename);
	fd = create_file(filename, text_content);
	printf("-> %s file written\n", filename);
	nletters = read_textfile(filename, 1024);
	printf("-> %s file read\n", filename);
	printf("-> %ld bytes read\n", nletters);
	printf("-> %s file appended\n", filename);
	nletters = append_text_to_file(filename, "\nI love C!");
	printf("-> %ld bytes appended\n", nletters);
	nletters = read_textfile(filename, 1024);
	printf("-> %ld bytes read\n", nletters);
	return (0);
}
