#include "main.h"

/**
  * create_file - Used to create file
  * @filename: The anme of the file
  * @text_content: The content in the text
  * Return: 1 or -1
  */
int create_file(const char *filename, char *text_content)
{
	int fd, bw;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	bw = write(fd, text_content, strlen(text_content));
	if (bw == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
