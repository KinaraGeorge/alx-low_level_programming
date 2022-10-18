#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10x
 * Return: void
 */

void print_alphabet_x10(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		char alpha;

		for (alpha = 'a'; alpha < 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
	_putchar('\n');
}

