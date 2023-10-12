#include "3-calc.h"

/**
  * main- Entry point
  * @argc: number of agruments of argv
  * @argv: Array which contains arguments
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;
	int res = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (!get_op_func(argv[2])(a, b))
	{
		printf("Error\n");
		exit(99);
	}
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = get_op_func(argv[2])(a, b);
	printf("%d\n", res);
	return (0);
}
