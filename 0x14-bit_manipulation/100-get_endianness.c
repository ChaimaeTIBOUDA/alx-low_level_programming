#include "main.h"
/**
 * get_endianness - check endianness
 * Return: 0 o 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *s = (char *) &i;

	return (*s);
}
