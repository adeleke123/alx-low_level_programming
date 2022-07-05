#include "main.h"

/**
 * main - Entry point
 *
 * Return:always 0 (success)
 */

int main(void)
{
	char letter[9] = "_putchar";
	int m;

	for (m = 0; m < 8; m++)
	{
		_putchar(letter[m]);
	}
	_putchar('\n');

	return (0);
}

