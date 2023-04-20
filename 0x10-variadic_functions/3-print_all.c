#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - print anything
 * @format: all types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *a = "";

	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", a, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", a, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", a, va_arg(l, double));
					break;
				case 's':
					s = va_arg(l, char*);
					if (!s)
						s = "(nil)";
					printf("%s%s", a, s);
					break;
				default:
					i++;
					continue;
			}
			a = ", ";
			i++;
			}
			}
	printf("\n");
	va_end(l);
	}
