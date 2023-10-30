#include "main.h"

/**
  * append_text_to_file - Used to append text to a file
  * @filename: The file to append
  * @text_content: THe text
  * Return: 1 or -1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ba;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	ba = write(fd, text_content, strlen(text_content));
	if (ba == -1)
		return (-1);
	close(fd);
	return (1);
}
