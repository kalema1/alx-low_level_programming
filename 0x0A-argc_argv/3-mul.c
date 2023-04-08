#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies 2 numbers
* @argc: argument count
* @argv: argument vector
*
* Return: value 0 on success
*/
int main(int argc, char *argv[])
{
	int i, m = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		m *= atoi(argv[i]);
	printf("%d\n", m);
	return (0);
}
