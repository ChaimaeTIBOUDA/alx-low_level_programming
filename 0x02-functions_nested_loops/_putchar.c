#include <unistd.h>

/**
 * _putchar - writesthe character c to stdout
 * @c: the character to print
 * Return: on success 1.
 * On erroe -1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
