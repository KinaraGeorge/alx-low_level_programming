#include <stdio.h>
/**
 * main - prints all possilbe combinations of single-digit numbers
 * Return: 0 if successful
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putcha (x);
		if (x != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
