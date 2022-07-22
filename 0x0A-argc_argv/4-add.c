#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds numbers
 * @argc: Argument count
 * @argv: Argument Adeleke
 *
 * Return: 0 if successful, 1 otherwise
 */

int main(int argc,  char *argv[])
{
	int result = 0, i, j;

	if (argc == 1)
	{
		printf("%i\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}

	printf("%i\n", result);
	return (0);
}
