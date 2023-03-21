#include "main.h"
/**
 * print_sign - print sign of num
 * @n: the number checked
 * Return: 1 for succes -1 for error zero fo nothing
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
