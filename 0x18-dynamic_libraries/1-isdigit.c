#include "main.h"
/**
 * _isdigit - cheks if the num is digit or not
 * Return: 1 for digit
 * @x: the num cheked
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	else
		return (0);
}
