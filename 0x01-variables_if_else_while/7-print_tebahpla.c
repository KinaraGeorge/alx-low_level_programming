#include <stdio.h>
/**
 * main - reverses lowercase alphabet
 * Return: 0 if successful
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
