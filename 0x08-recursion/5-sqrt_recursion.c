#include "main.h"
/**
 * _sqrt_recursion - return natural root square
 * @n: the number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_rec(n, 0));
}
/**
 * _sqrt_rec - help the function _sqrt_recursion to fing the naturzl root
 * *@n: the number
 * @i: iter
 * Return: result square root
 */
int _sqrt_rec(int n, int i)
{
	int j;

	j = i * i;

	if (j > n)
		return (-1);
	if (j == n)
		return (i);
	return (_sqrt_rec(n, i + 1));
}
