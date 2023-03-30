#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: final string
 * @src: first string
 * @n: number of char copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int srclen = 0;

	while (src[index++])
		srclen++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = srclen; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
