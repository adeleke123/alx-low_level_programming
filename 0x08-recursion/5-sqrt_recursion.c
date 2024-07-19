#include "main.h"

/**
 * _sqrt - Returns the square root of a number
 * @n: this is an int which is the num
 * @y: This is a buffer we will use
 * Return: n's square root
 */
int _sqrt(int n, int y)
{
	if (n == 1)
		return (1);
	else if (y == n || n < 0)
		return (-1);
	else if (y * y == n)
		return (y);
	else
		return (_sqrt(n, y + 1));
}

/**
 * _sqrt_recursion - Returns to the main program
 * the number from _sqrt
 * @n: this is the number
 *
 * Return: An int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
