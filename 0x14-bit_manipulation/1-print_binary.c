#include "main.h"

/**
* print_binary - prints the binary form of a number
* @n: number
*
* Return: no  value
*/
void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned int cur;

	for (i = 63; i >= 0; i--)
	{
		cur = n >> i;
		if (cur & 1)
		{
			_putchar('1');
			j++;
		}
		else if (cur)
			_putchar('0');
	}
	if (!cur)
		_putchar('0');
}
