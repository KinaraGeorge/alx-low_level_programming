#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * Return: returns 0 only when successful
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
