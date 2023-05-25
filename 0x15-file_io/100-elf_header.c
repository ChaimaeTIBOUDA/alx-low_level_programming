#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void check_elf(unsigned char *n);
void print_magic(unsigned char *n);
void print_class(unsigned char *n);
void print_data(unsigned char *n);
void print_version(unsigned char *n);
void print_abi(unsigned char *n);
void print_osabi(unsigned char *n);
void print_type(unsigned int t, unsigned char *n);
void print_entry(unsigned long int e, unsigned char *n);
void close_elf(int elf);
/**
 * check_elf - check ELF file
 * @n: pointer to the array of ELF number
 * Return: void
 */
void check_elf(unsigned char *n)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (n[i] != 127 &&
		n[i] != 'E' &&
		n[i] != 'L' &&
		n[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 * print_magic - print magic numbers of ELF
 * @n: pointer to the array of ELF
 * Return: void
 */
void print_magic(unsigned char *n)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", n[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * print_class - print the class ELF
 * @n: a pointer to the array of ELF
 * Return: void
 */
void print_class(unsigned char *n)
{
	printf("Class: ");
	switch (n[EI_CLASS])
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
			printf("<unknown: %x>\n", n[EI_CLASS]);
	}
}
/**
 * print_data - prints data of ELF
 * @n: pointer of the array ELF
 * Return: void
 */
void print_data(unsigned char *n)
{
	printf(" Data: ");
	switch (n[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		default:
			printf("<unknown: %x>\n", n[EI_CLASS]);
	}
}
/**
 * print_version - print version of ELF
 * @n: pointer to the array of ELF
 * Return: void
 */
void print_version(unsigned char *n)
{
	printf(" Version: %d",
			n[EI_VERSION]);
	switch (n[EI_VERSION])
	{
		case EV_CURRENT:
			printf("(current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
/**
 * print_osabi - print OS/ABI ELF
 * @n: pointer to the array ELF
 * Return: void
 */
void print_osabi(unsigned char *n)
{
	printf(" OS/ABI: ");
	switch (n[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - Sustem V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP -UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - LINUX\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Unix - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
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
			printf("<unknown: %x>\n", n[EI_OSABI]);
	}
}
/**
 * print_abi - print ABI version of ELF
 * @n: pointer to the array ELF
 * Return: void
 */
void print_abi(unsigned char *n)
{
	printf("ABI Version: %d\n",
			n[EI_ABIVERSION]);
}
/**
 * print_type - print type of ELF
 * @t: ELF type
 * @n: pointer to the array ELF
 * Return: bvoid
 */
void print_type(unsigned int t, unsigned char *n)
{
	if (n[EI_DATA] == ELFDATA2MSB)
		t >>= 8;
	printf("TYPE: ");
	switch (t)
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
			printf("Core (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", t);
	}
}
/**
 * print_entry - print entry point
 * @e: address of ELf
 * @n: pointer to array ELF
 * Return: void
 */
void print_entry(unsigned long int e, unsigned char *n)
{
	printf("Entry point address: ");
	if (n[EI_DATA] == ELFDATA2MSB)
	{
		e = ((e << 8) & 0xFF00FF00) |
			((e >> 8) & 0xFF00FF);
		e = (e << 16) | (e >> 16);
	}
	if (n[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e);
	else
		printf("%#lx\n", e);
}
/**
 * close_elf - close ELF
 * @elf: file ELF
 * Return: void
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fs %d\n", elf);
		exit (98);
	}
}
/**
 * main - display information
 * @argc: number of lements
 * @argv: array of pointers
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *head;
	int op, r;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Erro: Can't read file %s\n", argv[1]);
		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));
	if (head == NULL)
	{
		close_elf(0);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit (98);
	}
	r = read(op, head, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(head);
		close_elf(0);
		dprintf(STDERR_FILENO, "Error: '%s' : NO such file\n",
				argv[1]);
		exit(98);
	}
	return (0);
}

