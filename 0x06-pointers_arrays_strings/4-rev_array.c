#include "main.h"

/**
* reverse_array - reverse array of integers
* @a: array of integer
* @n: numbr of elements
*
* Return: no value
*/
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
