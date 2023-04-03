#include "main.h"
#include <stddef.h>
/**
 * _strchr - locate character in string
 * @s: the string
 * @c: char would be located
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i;
	int sl;

	for (i = 0; s[i] != '\0'; i++)
		sl++;
	for (i = 0; i <= sl; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
