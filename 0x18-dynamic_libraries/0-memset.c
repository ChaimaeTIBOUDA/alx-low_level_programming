#include "main.h"
/**
 * _memset - fill the memory with constant byte
 * @s: pointer of n
 * @n: memory pointed by s
 * @b: constant byte pointed
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
