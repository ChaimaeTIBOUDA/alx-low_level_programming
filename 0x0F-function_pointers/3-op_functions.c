#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - return sum of 2 numbers
 * @a: first number
 * @b: second number
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return the difference of 2 numbers
 * @a: first num
 * @b: second num
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - return product of 2 numbers
 * @a: first num
 * @b: second num
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - return division of 2 numbers
 * @a: first num
 * @b: second num
 * Return: quotient of a & b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - return remainder of divvision
 * @a: first num
 * @b: second num
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
