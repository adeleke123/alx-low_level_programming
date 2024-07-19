#include "main.h"

/**
 * factorial - Returns the factorial of a number
 * @n: The number to carry out the operation on
 *
 * Return: An int which is the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
