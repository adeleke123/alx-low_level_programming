#include <stdio.h>

/**
 * main - This program prints all decimal
 * digits without using printf
 * Return: Exit status is zero if successful
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
			break;
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
