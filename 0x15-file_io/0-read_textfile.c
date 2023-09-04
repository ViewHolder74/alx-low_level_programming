#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t char_read, char_write;
	char *buf;

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	char_read = read(fp, buf, letters);
	char_write = write(STDOUT_FILENO, buf, char_read);

	close(fp);

	free(buf);

	return (char_write);
}
