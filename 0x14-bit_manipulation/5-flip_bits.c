#include "main.h"
/**
 * flip_bits - return number of bits to flip
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int b = 0;
	unsigned long int c;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		c = x >> i;
		if (c & 1)
			b++;
	}
	return (b);
}
