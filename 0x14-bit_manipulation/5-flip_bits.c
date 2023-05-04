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
	int j = 0;
	unsigned long int exor = n ^ m;

	while (exor)
	{
		j += exor & 1;
		exor >>= 1;
	}
	return (j);
}
