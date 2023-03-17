#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Return: 0 always 0
 */
int main(void)
{
	char i;
	char I;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (I = 'A' ; I <= 'Z' ; I++)
		putchar(I);
	putchar('\n');
	return (0);
}
