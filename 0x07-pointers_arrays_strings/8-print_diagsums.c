#include "main.h"
#include <stdio.h>

/**
* print_diagsums - print diagonal sum
* @a: input
* @size: input
*
* Return: no value
*/
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (size * i + i));
		sum2 += *(a + (size * i + size - 1 - i));
	}
	printf("%d, %d\n", sum1, sum2);
}
