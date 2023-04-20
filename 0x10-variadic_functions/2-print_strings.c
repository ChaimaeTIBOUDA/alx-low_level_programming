#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: separate the strings
 * @n: number of strings passed to the strings
 * @...: variable parameters
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *s;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char*);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
