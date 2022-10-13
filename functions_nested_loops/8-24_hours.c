#include "main.h"

/**
 * print - minutes
 *
 * Return: 00:00 to 23:59
 */
void jack_bauer(void)
{
	int a, b, c ,d;

	for (a = '0'; a <= '2'; a++)
	{
		for (b = '0'; b <= '7'; b++)
		{
			for (c = '0'; b <= '5'; c++)
			{
				for (d = '0'; d <= '7'; d++)
				{
					if (a >= '2' && b >= '4')
						break;
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
}
