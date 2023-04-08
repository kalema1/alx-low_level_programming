#include <stdio.h>
#include <stdlib.h>

/**
* main - print the number of arguments
* @argc: argument count
* @argv: argument vector
*
* Return: value 0
*/
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
