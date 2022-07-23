#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase letters
 *
 * @c: parametr to be printed
 * Return: 0 or 1 depending on the condition
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
