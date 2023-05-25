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
void print_magic(unsigned char n)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EL_NIDENT; i++)
	{
		printf("%02x", n[i]);
		if (i == EL_NIDENT - 1)
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
	switch (n[EL_CLASS])
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
			printf("<unknown: %x>\n", n[EL_CLASS]);
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
	switch (n[EL_DATA])
	{
		case ELFDATANOME:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		default:
			printf("<unknown: %x>\n", n[EL_CLASS]);
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
			n[EL_VERSIONI]);
	switch (n[EL_VERSIONI]);
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
 * print_osabi - print OS/ABI ELF
 * @n: pointer to the array ELF
 * Return: void
 */
void print_osabi(unsigned char *n)
{
	printf(" OS/ABI: ");
	switch (n[EL_OSABI])
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
			printf("<unknown: %x>\n", n[EL_OSABI]);
	}
}

