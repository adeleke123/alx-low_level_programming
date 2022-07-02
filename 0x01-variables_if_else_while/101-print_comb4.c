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
	int k;

	for (i = 48; i <= 55; i++)
	{
		for (j = 49; j <= 56; j++)
		{
			for (k = 50; k <= 57; k++)
			{
				if ((i >= j) || (j >= k))
					continue;
				putchar(i);
				putchar(j);
				putchar(k);
				if ((k == 57) && (j == 56))
				{
					if (i == 55)
						break;
				}
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
