#include <stdio.h>
/**
 * main - prints base 10 numbers with putchar
 * Return: 0 when successful
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
