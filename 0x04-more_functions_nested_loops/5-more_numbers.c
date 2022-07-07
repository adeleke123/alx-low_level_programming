#include "main.h"

/**
 * more_numbers - priint more
 *
 * Return: 0
 */

void more_numbers(void)
{
	int count;
	int n;

	for (count = 0; count < 10; count++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
