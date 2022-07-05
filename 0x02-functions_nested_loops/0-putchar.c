#include "main.h"

/**
 * main - Entry point
 * Return:always 0 (success)
 */
int main(void)
{
	char text[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}

