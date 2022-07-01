#include <stdio.h>

/**
 * main - Prints the alphabet except the letters q and e.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (!(i == 113 || i == 101))
			putchar(i);
	}
	putchar('\n');
	return (0);
}
