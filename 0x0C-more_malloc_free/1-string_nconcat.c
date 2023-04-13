#include "main.h"
/**
 * string_nconcat -  concatenates two strings
 * @s1: string
 * @s2: string
 * @n: n bytes of s2
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, m = 0, l = 0;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[m])
		m++;
	if (n >= m)
		l = i + m;
	else
		l = i + n;
	a = malloc(sizeof(char) * l + 1);
	if (a == NULL)
		return (NULL);
	m = 0;
	while (j < l)
	{
		if (j <= i)
			a[j] = s1[j];
		if (j >= i)
		{
			a[j] = s2[m];
			m++;
		}
		j++;
	}
	a[j] = '\0';
	return (a);
}
