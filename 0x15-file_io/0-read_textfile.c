#include "main.h"

/**
  * read_textfile - Used to read contents of text file
  * @filename: The file to print
  * @letters: Number of letters to print
  * Return: the number printed or 0
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t byteRead, byteWritten;
	int fd = open(filename, O_RDONLY);
	char *buffer;

	if (fd == -1)
		return (0);
	if (filename == NULL)
	{
		close(fd);
		return (0);
	}
	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	byteRead = read(fd, buffer, letters);
	if (byteRead <= 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	byteWritten = write(STDOUT_FILENO, buffer, byteRead);

	close(fd);
	free(buffer);

	if (byteWritten != byteRead)
		return (0);
	else
		return (byteWritten);
}
