#include "main.h"
/**
*_calloc -  allocates memory for an array
*@nmemb: elemnts of array
*@size: size
*Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = nmemb * size;
	a = malloc(j);
	if (a == NULL)
		return (NULL);
	while (i < j)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
