#include "main.h"
/**
 * is_prime_number - find if n is prime number or not
 * @n: the number
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_n(n, n - 1));
}
/**
 * _prime_n - help the function is_prime_number
 * @n: number
 * @i: iter
 * Return: int
 */
int _prime_n(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime_n(n, i - 1));
}
