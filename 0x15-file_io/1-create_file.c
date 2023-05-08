#include "main.h"

/**
 * create_file - create a file and write in it
 * @filename: filename
 * @text_content: placeholder
 * Return: Always
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, len;

	len = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	op = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	wr = write(op, text_content, len);
	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
