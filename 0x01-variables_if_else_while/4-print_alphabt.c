#include <stdio.h>

/**
 * main - prints alphabets excepts q and e
 * Return: 0 if successful
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		if (l != 'q' && l != 'e')
		putchar(l);
	putchar('\n');

	return (0);
}

