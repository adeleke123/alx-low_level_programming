#include <stdio.h>

/**
 * main - This program prints all decimal
 * digits without using printf
 * Return: Exit status is zero if successful
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if ((j == 57) && (i == 56))
				break;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
