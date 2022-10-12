#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n, a;

	for (n = 0; n <= 9; n++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}								}
}
