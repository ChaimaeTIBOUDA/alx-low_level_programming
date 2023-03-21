#include "main.h"
/**
 * _isalpha - checks for alpha
 * Return: 1 for success
 * @c: the char cheked
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
