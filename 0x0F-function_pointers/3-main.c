#include  "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - compute operation
* @argc: argument count
* @argv: argument vector
*
* Return: value 0
*/
int main(int argc, char *argv[])
{
	int r;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	r = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", r);
	return (0);
}
