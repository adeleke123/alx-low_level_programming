#include <stdio.h>

/**
 * main - This program prints a-z to std output
 * Return: Exit status is zero if successful
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
