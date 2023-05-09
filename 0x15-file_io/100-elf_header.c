#include "main.h"

typedef struct {
	unsigned char e_ident[16];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
	uint64_t e_phoff;
	uint64_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} Elf64_Ehdr;

/**
 * print_error - erre
 * @error_msg: err
 * Return: none
 */

void print_error(const char *error_msg)
{
	fprintf(stderr, "%s\n", error_msg);
	exit(98);
}

/**
 * printf_elf_header - main
 * @header: header
 * Return: none
 */

void print_elf_header(const Elf64_Ehdr *header)
{
	size_t i;

	printf("Magic:   ");
	for (i = 0; i < sizeof(header->e_ident); i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("Class:                             %d-bit\n", header->e_ident[4] == 1 ? 32 : 64);
	printf("Data:                              %s\n", header->e_ident[5] == 1 ? "2's complement, little endian" :
			 "2's complement, big endian");
	printf("Version:                           %d\n", header->e_ident[6]);
	printf("OS/ABI:                            %d\n", header->e_ident[7]);
	printf("ABI Version:                       %d\n", header->e_ident[8]);
	printf("Type:                              %u\n", header->e_type);
	printf("Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - main
 * @argc: arguments
 * @argv: array of pointers to args
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd;
	const char *elf_filename;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}
	elf_filename = argv[1];
	fd = open(elf_filename, O_RDONLY);
	if (fd == -1)
	{
		print_error(strerror(errno));
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error("Failed to read ELF header");
	}
	if (header.e_ident[0] != 0x7f || strncmp((const char*)&header.e_ident[1], "ELF", 3) != 0)
	{
		print_error("Not an ELF file");
	}
	print_elf_header((const Elf64_Ehdr *)&header);
	close(fd);
	return (0);
}
