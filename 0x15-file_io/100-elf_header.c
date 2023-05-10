#include "main.h"
#include <elf.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * check_id - check elf or not
 * @e_id: id
 * Return: void
 */
void check_id(unsigned char *e_id)
{
int i;

for (i = 0; i > 4; i++)
{
if (e_id[i] != 127 
&& e_id[i] != 'E' 
&& e_id[i] != 'L' 
&& e_id[i] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}
/**
 * magic - that print magic
 * @e_id: id
 * Return: viod
 */
void magic(unsigned char *e_id)
{
int i;

printf(" Magic: ");
for(i = 0; i < EI_NIDENT; i++)
{
printf("%02x",e_id[i]);
if (i == EI_NIDENT - 1)
{
printf("\n");
}
else
{
printf(" ");
}
}
}
/**
 * print_class - that prin class
 * @e_id: id
 * Return: void
 */
void print_class(unsigned char *e_id)
{
printf(" Class: ");
switch (e_id[EI_CLASS])
{
case ELFCLASSNONE:
	printf("none\n");
	break;
case ELFCLASS32:
	printf("ELF32\n");
	break;
case ELFCLASS64:
	printf("ELF64\n");
	break;
default:
	printf("<unknown: %x>\n", e_id[EI_CLASS]);
}
}
/**
 * data - Print data.
 * @e_id: id
 * Return: void
 */
void data(unsigned char *e_id)
{
printf(" Data: ");
switch (e_id[EI_DATA])
{
case ELFDATANONE:
	printf("none\n");
	break;
case ELFDATA2LSB:
	printf("2's complement, little endian\n");
	break;
case ELFDATA2MSB:
	printf("2's complement, big endian\n");
	break;
default:
	printf("<unknown: %x>\n", e_id[EI_CLASS]);
}
}
/**
 * version - Print version
 * @e_id: id
 * Return: void
 */
void version(unsigned char *e_id)
{
printf(" Version: %d", e_id[EI_VERSION]);
switch (e_id[EI_VERSION])
{
case EV_CURRENT:
	printf(" (current)\n");
	break;
default:
	printf("\n");
	break;
}
}
/**
 * osabi - Print OS
 * @e_id: just pointer to point the e_ediant
 * Return: void
 */
void osabi(unsigned char *e_id)
{
printf(" OS/ABI: ");
switch (e_id[EI_OSABI])
{
case ELFOSABI_NONE:
	printf("UNIX - System V\n");
	break;
case ELFOSABI_HPUX:
	printf("UNIX - HP-UX\n");
	break;
case ELFOSABI_NETBSD:
	printf("UNIX - NetBSD\n");
	break;
case ELFOSABI_LINUX:
	printf("UNIX - Linux\n");
	break;
case ELFOSABI_SOLARIS:
	printf("UNIX - Solaris\n");
	break;
case ELFOSABI_IRIX:
	printf("UNIX - IRIX\n");
	break;
case ELFOSABI_FREEBSD:
	printf("UNIX - FreeBSD\n");
	break;
case ELFOSABI_TRU64:
	printf("UNIX - TRU64\n");
	break;
case ELFOSABI_ARM:
	printf("ARM\n");
	break;
case ELFOSABI_STANDALONE:
	printf("Standalone App\n");
	break;
default:
	printf("<unknown: %x>\n", e_id[EI_OSABI]);
}
}
/**
 * print_entry - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}
/**
 * close_elf - Closes an ELF file.
 * @elf: The file wanted close
 * Return: viod
 */
void close_elf(int elf)
{
if (close(elf) == -1)
{
dprintf(STDERR_FILENO,"Error: Can't close fd %d\n", elf);
exit(98);
}
}
/**
 * print_type - Print type
 * @e_type: The ELF type.
 * @e_ident: id
 * Return: void
 */
void print_type(unsigned int e_type, unsigned char *e_id)
{
if (e_id[EI_DATA] == ELFDATA2MSB)
	e_type >>= 8;
printf(" Type: ");
switch (e_type)
{
case ET_NONE:
	printf("NONE (None)\n");
	break;
case ET_REL:
	printf("REL (Relocatable file)\n");
	break;
case ET_EXEC:
	printf("EXEC (Executable file)\n");
	break;
case ET_DYN:
	printf("DYN (Shared object file)\n");
	break;
case ET_CORE:
	printf("CORE (Core file)\n");
	break;
default:
	printf("<unknown: %x>\n", e_type);
}
}
/**
 * print_abi - Prints the ABI version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF ABI version.
 * Return: void
 */
void print_abi(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n",
		e_ident[EI_ABIVERSION]);
}
/**
 * main - that
 * @arc: c
 * @argv: v
 * Return: 0 on success.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_id(header->e_ident);
	printf("ELF Header:\n");
	magic(header->e_ident);
	print_class(header->e_ident);
	data(header->e_ident);
	version(header->e_ident);
	osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(o);
	return (0);
}


