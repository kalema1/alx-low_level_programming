#include "main.h"

/**
* flip_bits - number of bits you would need to flip
* @n: number
* @m: number 2
*
* Return: value number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int cur;
	unsigned long int exor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cur = exor >> i;
		if (cur & 1)
			j++;
	}
	return (cur);
}
