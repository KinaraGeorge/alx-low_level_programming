#include <stdio.h>

/**
 * main - print the sizes of types in C
 * Return: zero(0) if main works fine
 */

int main(void)
{
	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("Size of int: %ld byte(s)\n", sizeof(int));
	printf("Size of long: %ld byte(s)\n", sizeof(long));
	printf("Size of long long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of float: %ld byte(s)\n", sizeof(float));
	return (0);
}
