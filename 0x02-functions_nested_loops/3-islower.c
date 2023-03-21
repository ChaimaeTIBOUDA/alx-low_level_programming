#include "main.h"
/**
 * _islower - print lower alpha
 * @c: tha char cheked
 * Return: 1 if success
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
