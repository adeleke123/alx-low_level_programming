#include "3-calc.h"

/**
 * main - This calculates the values of two numbers
 * @argc: This is the argument count
 * @argv: This is the argument vector
 * Return: 0 if succesfful
 */
int main(int argc, char **argv)
{
	int (*f)(int a, int b);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", f(a, b));
	return (0);
}
