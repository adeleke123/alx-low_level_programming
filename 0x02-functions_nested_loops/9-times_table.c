#include "main.h"

/**
 * times_table - Prints times table
 *
 * Return; Null Void
 */
void times_table(void)
{
	int i, j, product, first_digit, last_digit;
	int flag = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			flag = i * (j + 1);
			if (product > 9)
			{
				first_digit = (product / 10) + 48;
				last_digit = (product % 10) + 48;
				_putchar(first_digit);
				_putchar(last_digit);
			}
			else
			{
				_putchar(product + 48);
			}
			if (j == 9)
			{
				_putchar('\n');
			}
			else
			{
				if (flag > 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
	}
}
