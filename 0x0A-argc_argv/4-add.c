#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* main - adds positive numbers
* @argc: argument count
* @argv: argument vector
*
* Return: value 0 on success
*/
int main(int argc, char *argv[])
{
	unsigned int i, sum = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
