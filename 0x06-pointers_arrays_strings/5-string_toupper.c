#include "main.h"
/**
 *  string_toupper - change lowercase to uppercase
 *  @a: string changed
 *  Return: char
 */
char *string_toupper(char *a)
{
	int index = 0;

	while (a[index])
	{
		if (a[index] >= 'a' && a[index] <= 'z')
			a[index] -= 32;
		index++;
	}
	return (a);
}
