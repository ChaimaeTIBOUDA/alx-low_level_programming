#include "main.h"
/**
 * factorial - return factorial of an int
 * @n: the integer
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
