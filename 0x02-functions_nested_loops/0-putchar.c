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
	for (int i = 0; i < 8; i++)
	{
		char text[9] = "_putchar";

		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
