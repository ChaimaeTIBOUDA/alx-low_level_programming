#include "main.h"
/**
 * _isupper - checks for upper letter
 * Return: 1 of upper 0 for lower
 * @x: the char checked
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	else
		return (0);
}
