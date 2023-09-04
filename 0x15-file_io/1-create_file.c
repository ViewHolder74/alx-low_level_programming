#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: file name
 * @text_content: content texts
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	char *text;

	fd  = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		text = text_content;
		while (*text != '\0')
		{
			if (write(fd, text, 1) != 1)
			{
				close(fd);
				return (-1);
			}
			text++;
		}
	}
	close(fd);
	return (1);
}

