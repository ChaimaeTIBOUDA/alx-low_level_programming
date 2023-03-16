#include <stdio.h>
/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char)"\n");
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("Size of an long int: %lu byte(s)", sizeof(long int));
	printf("Size of an long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of an float: %lu byte(s)", sizeof(float));
	return (0);
}
