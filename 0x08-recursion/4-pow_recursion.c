#include "main.h"

/**
 * _pow_recursion - Returns the power of an int
 * given tthe number and the exponent
 * @x: This int is the number
 * @y: This int is the exponent
 *
 * Return: An int which is the exponent
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
