#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line.
 *  @s: This is the string to be printed
 *
 *  return: Null void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_put_recursion(++s)i;
}
