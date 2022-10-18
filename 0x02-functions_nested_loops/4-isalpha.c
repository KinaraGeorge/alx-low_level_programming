#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: c is an ascii character;
 * Return: 1 if letter and 0 if not a letter
 */
int _isalpha(int c);
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
