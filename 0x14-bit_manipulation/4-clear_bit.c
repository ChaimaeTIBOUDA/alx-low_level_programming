#include "main.h"
/**
 * clear_bit - set 0 at index
 * @n: pointer to the number
 * @index: index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 36)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
