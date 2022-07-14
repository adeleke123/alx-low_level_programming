#include "main.h"

/**
 * reverse_array - Flips an array
 * @a: This is the array to be flipped
 * @n: This is the number of elements in the array
 *
 * Return: Null Void
 */
void reverse_array(int *a, int n)
{
	int i, first, last, keep, counts;

	counts = n / 2;
	first = 0;
	last = n - 1;

	for (i = 0; i < counts; i++)
	{
		keep = a[first];
		a[first] = a[last];
		a[last] = keep;
		first++;
		last--;
	}
}
