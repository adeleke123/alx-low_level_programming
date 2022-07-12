#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: this is a string
 *
 * Return: Null void
 */
void _puts(char *str)
{
	int track;

	for (track = 0; *(str + track) != '\0'; track++)
	{
		_putchar(*(str + track));
	}

	_putchar('\n');
}
