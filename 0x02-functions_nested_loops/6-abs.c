#include "main.h"

/**
 * _abs - Computes the absolute value of the integer passed
 * @n:@n: This is a real number
 *
 * Return: Absolute Value
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (0);
	}
}
