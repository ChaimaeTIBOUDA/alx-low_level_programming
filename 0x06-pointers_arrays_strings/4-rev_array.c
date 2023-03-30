#include "main.h"
/**
 * reverse_array - reverse the content of two arrays
 * @a: first array
 * @n: num of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
