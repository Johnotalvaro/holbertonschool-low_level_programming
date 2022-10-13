#include "main.h"

/**
 * main - _putchar
 *
 * Return: 0
 */

int main(void)
{
	char *message = "Holberton";
	int m = 0;

	do {
		_putchar(message[m++]);
	} 
	while (message[m] != '\0');
	_putchar('\n');

	return (0);
}
