#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_error - entry point
 * @message: arg
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(98);
}

/**
 * print_elf_header - elf
 * @header: arg
 */
void print_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:		ELF%d\n",
			header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
	printf("  Data:			%s\n",
			header->e_ident[EI_DATA] ==
			ELFDATA2LSB ? "2's complement, little endian" :
			"2's complement, big endian");
	printf("  Version:		%d (current)\n",
			header->e_ident[EI_VERSION]);
	printf("  OS/ABI:		%s\n",
			header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "UNKNOWN");
	printf("  ABI Version:		%d\n",
			header->e_ident[EI_ABIVERSION]);
	printf("  Type:			%s\n",
			header->e_type == ET_EXEC ? "EXEC (Executable file)" : "UNKNOWN");
	printf("  Entry point address:	0x%lx\n",
			(unsigned long)header->e_entry);
}

/**
 * main - Entry point
 * @ac: arg
 * @av: arg
 * Return: int
 */
int main(int ac, char *av[])
{
	int fd;
	Elf64_Ehdr header;

	if (ac != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		print_error("Error: Can't open file");
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error("Error: Can't read from file");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Error: Not an ELF file");
	}

	print_elf_header(&header);

	close(fd);

	return (0);
}
