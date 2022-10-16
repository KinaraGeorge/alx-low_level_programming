#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0 - success
 */
int main(void)
{
	int i;
	char str;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (str = 'a'; str <= 'f'; str++)
	{
		putchar(str);
	}
	putchar('\n');
	return (0);
}
