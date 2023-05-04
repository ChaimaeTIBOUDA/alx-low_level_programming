#include "main.h"
/**
 * get_bit - return the value of bit
 * @n: number
 * @index: index
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	if (index > 63)
		return (-1);
	a = (n >> index) & 1;
	return (a);
}
