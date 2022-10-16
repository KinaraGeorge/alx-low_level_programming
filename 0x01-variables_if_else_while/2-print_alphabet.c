#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * Return: returns 0 only when successful
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
