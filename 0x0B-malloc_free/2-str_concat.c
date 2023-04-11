#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, m = 0;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	m = i + j;
	a = malloc((sizeof(char) * m) + 1);
	if (a == NULL)
		return (NULL);
	j = 0;
	while (k < m)
	{
		if (k <= i)
			a[k] = s1[k];
		if (k >= i)
		{
			a[k] = s2[j];
			j++;
		}
		k++;
	}
	a[k] = '\0';
	return (a);
}
