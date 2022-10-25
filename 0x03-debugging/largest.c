#include <stdio.h>

/**
 * main - prints the largest of three numbers
 */

int main(void)
{
	int largest(int a, int b, int c) {
		if (a > b && a > c) {
			printf("%d is the largest of the integers\n", a);
		}
	}

	largest(9, 8, 0);
	return 0;
}
