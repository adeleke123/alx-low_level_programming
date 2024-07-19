#include <stdio.h>

/**
 * main - This program print all decimal
 * digits without using printf
 * Return: Exit status is zero if successful
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
