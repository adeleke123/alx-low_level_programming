#include "main.h"

/**
 * print_numbers - print num from zero to 9
 * Return: 0
 */


void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
