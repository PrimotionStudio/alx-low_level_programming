#include "main.h"

/**
  * main - Entry point
  * @ac: Num of arg
  * @av: Args
  * Return: 0 or -1
  */
int main(int ac, char *av[])
{
	int ft, ff, br, bw;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ff = open(av[1], O_RDONLY, 0664);
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	ft = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
		exit(99);
	}
	while ((br = read(ff, buffer, 1024)) > 0)
	{
		bw = write(ft, buffer, br);
		if (bw != br)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
			exit(99);
		}
	}
	if (br == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(ff) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", ff);
		exit(100);
	}
	if (close(ft) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", ft);
		exit(100);
	}
	return (0);
}
