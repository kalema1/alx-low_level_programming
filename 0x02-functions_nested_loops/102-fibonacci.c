#include <stdio.h>

/**
* main - print first 50 numbers
*
* Return: value 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 50; i++)
	{
		printf("%d", i);
		if (i != 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
