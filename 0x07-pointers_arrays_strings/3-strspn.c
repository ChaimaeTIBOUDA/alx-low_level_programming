#include "main.h"
/**
 * _strspn - length of prefix
 * @s: initial segment
 * @accept: bytes input
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, a;

	a = 0;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				a++;
				break;
			}
		if (accept[j + 1] == '\0')
			return (a);
		}
		s++;
	}
	return (a);
}
