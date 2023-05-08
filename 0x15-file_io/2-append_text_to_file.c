#include "main.h"

/**
 * append_text_to_file - appends text to afile
 * @filename: filename
 * @text_content: textcont
 * Return: always
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len;

	len = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}
	op = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (op == -1)
		return (-1);
	wr = write(op, text_content, len);
	if (wr == -1)
	{
		close(op);
		return (-1);
	}
	close(op);
	return (1);
}

