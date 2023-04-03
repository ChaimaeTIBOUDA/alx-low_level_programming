#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates substring
 * @haystack: string wich contains the occurance
 * @needle:substring
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*haystack == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return (NULL);
}
