#include "main.h"

/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char pr[10] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(pr[i]);
	}
	_putchar('\n');

	return (0);
}
