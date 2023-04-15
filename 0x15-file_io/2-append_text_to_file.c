#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: Input Name File
 * @text_content: Input Text
 *
 * Return: Depend Condition
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int f_op, f_wr, i;

	if (filename == NULL)
		return (-1);
	f_op = open(filename, O_WRONLY | O_APPEND);
	if (f_op < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(f_op);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		;
	f_wr = write(f_op, text_content, i);
	if (f_wr < 0)
		return (-1);
	close(f_op);
	return (1);
}
