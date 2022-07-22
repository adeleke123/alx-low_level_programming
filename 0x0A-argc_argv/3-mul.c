#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers from the command line
 * @argc: Argument count
 * @argv: Argument Vector
 *
 * Return: 0 if successful, 1 otherwise
 */

int main(int argc,  char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i, j;

		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%i\n", i * j);
	}
	return (0);
}
