#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array with char
 * @size: size of the array
 * @c: tha character filled in array
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
