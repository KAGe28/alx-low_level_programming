#include "3-calc.h"

/**
  * main- Entry point
  * @argc: number of agruments of argv
  * @argv: Array which contains arguments
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int value = 0;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	value = f(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", value);
	return (0);
}
