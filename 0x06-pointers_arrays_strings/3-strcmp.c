#include "main.h"
/**
 * _strcmp - compares two pointers
 * @s1: first pointer
 * @s2: second
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
