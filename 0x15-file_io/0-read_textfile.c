#include "main.h"
/**
 * read_textfile - read text and print in POSIX
 * @filename: text
 * @letters: number of letters
 * Return: 0 or number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t f;
	ssize_t w;
	ssize_t r;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	r = read(f, b, letters);
	w = write(STDOUT_FILENO, b, r);
	free(b);
	close(f);
	return (w);
}
