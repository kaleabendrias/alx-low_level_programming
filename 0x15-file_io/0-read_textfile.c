#include "main.h"

/**
 * read_textfile - entry
 * @filename: placheholder for filename
 * @letters: size of the charcers needed
 * Return: Always
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fh, rd, wr;
	char *buff;

	if (filename == NULL)
		return (0);
	fh = open(filename, O_RDONLY);
	if (fh == -1)
		return (0);
	buff = malloc(sizeof(char) * letters + 1);
	if (buff == NULL)
	{
		close(fh);
		return (0);
	}
	rd = read(fh, buff, letters);
	if (rd == -1)
	{
		close(fh);
		free(buff);
		return (0);
	}
	buff[rd] = '\0';
	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1 || wr != rd)
	{
		close(fh);
		free(buff);
		return (0);
	}
	close(fh);
	free(buff);
	return (wr);
}
