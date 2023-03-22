#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - print the num if neg or posi or 0
 * @i: the num cheked
 * Return: void
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("%d is zero\n", i);
}
