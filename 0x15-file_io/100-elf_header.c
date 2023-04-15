#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int fd;
	ssize_t nletters;
	char *filename;
	char *text_content;

	filename = "test_0.txt";
	text_content = "Holberton School!\n";
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
