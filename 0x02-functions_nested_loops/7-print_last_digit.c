#include "main.h"
/**
 * print_last_digit - print last difit of number
 * @n: the number treated
 * Return: value last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 10)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
