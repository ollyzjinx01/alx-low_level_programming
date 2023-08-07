#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * display_elf_header - ......
 * @filename: magic.
 * Return: no return.
 */

void display_elf_header(const char *filename)
{
	int fd;
	Elf64_Ehdr elf_header;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error opening file: %s\n", filename);
		exit(98);
	}
	
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error reading ELF header from file: %s\n", filename);
		close(fd);
		exit(98);
	}
	
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
		elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
		elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
		elf_header.e_ident[EI_MAG3] != ELFMAG3)
		{
		fprintf(stderr, "File %s is not an ELF file.\n", filename);
		close(fd);
		exit(98);
	}

	printf("Magic: %c%c%c%c\n",
		   elf_header.e_ident[EI_MAG0], elf_header.e_ident[EI_MAG1],
		   elf_header.e_ident[EI_MAG2], elf_header.e_ident[EI_MAG3]);

	printf("Class: %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");

	printf("Data: %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");

	printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);

	printf("OS/ABI: %s\n", elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Unknown");

	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);

	printf("Type: %s\n", elf_header.e_type == ET_EXEC ? "EXEC (Executable file)" : "Unknown");

	printf("Entry point address: 0x%lx\n", (unsigned long)elf_header.e_entry);

	close(fd);
}
/**
 * main - address
 * @argc: .....
 * @argv: .....
 * Return: no return.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	display_elf_header(argv[1]);

	return 0;
}
