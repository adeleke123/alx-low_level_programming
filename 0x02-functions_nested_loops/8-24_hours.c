#include "main.h"

/**
 * jack_bauer - prints 00:00 to 23:59
 *
 * Return: Just prints
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 48; i < 51; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k < 54; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
			if (i == 50 && j > 50)
				break;
		}
	}
}
