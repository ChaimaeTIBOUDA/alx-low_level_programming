#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @height: height
 * @width: width
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, m;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(a[j]);
			free(a);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (m = 0; m < width; m++)
			a[k][m] = 0;
	}
	return (a);
}
