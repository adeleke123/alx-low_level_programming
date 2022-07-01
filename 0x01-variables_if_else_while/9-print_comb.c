#include <stdio.h>

/**
 * main - This program prints a-z to std output
 * Return: Exit status is zero if successful
 */
int main(void)
{
	int num;

	for (num = 0; num < 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
