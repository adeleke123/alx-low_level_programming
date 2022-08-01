#include <stdio.h>

/**
 * main - Prints the name of whatever file runs this code
 *
 * Return: Null Void
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
