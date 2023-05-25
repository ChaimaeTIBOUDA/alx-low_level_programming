#include "main.h"
/**
 * create_buffer - alocate 1024 bytes
 * @file: file buffer
 * Return: new alocated buffer address
 */
char *create_buffer(char *file)
{
	char *B;

	B = malloc(sizeof(char) * 1024);
	if (B == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (B);
}
/**
 * close_file - close file
 * @fd : file
 * Return: void
 */
void close_file(int fd)
{
	int cl;

	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copy
 * @argv: vector
 * @argc: array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int fr, t, r, wr;
	char *B;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	B = create_buffer(argv[2]);
	fr = open(argv[1], O_RDONLY);
	r = read(fr, B, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fr == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(B);
			exit(98);
		}
		wr = write(t, B, r);
		if (t == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(B);
			exit(99);
		}
		r = read(fr, B, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(B);
	close_file(fr);
	close_file(t);
	return (0);
}
