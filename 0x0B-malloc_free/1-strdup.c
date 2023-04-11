#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str:string
 * Return: char
 */
char *_strdup(char *str)
{
	int s = 0, i = 1;
	char *a;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	a = malloc((sizeof(char) * i) + 1);
	if (a == NULL)
		return (NULL);
	while (s < i)
	{
		a[s] = str[s];
		s++;
	}
	a[s] = '\0';
	return (a);
}
