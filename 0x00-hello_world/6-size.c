#include <stdio.h>

/**
 * main - prints out sizes of various type in c
 * Return: zero if main runs smoothly
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(cha));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
}
