#include "main.h"

/**
* print_times_table - print n times table
* @n: number of times
*
* Return: value 0
*/
void print_times_table(int n)
{
	int a, b, pdt;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');
				pdt = a * b;
				if (pdt < 99)
				{
					_putchar(' ');
				}
				if (pdt <= 9)
				{
					_putchar(' ');
				}
				if (pdt >= 100)
				{
					_putchar((pdt / 100) + '0');
					_putchar(((pdt / 10) % 10) + '0');
				}
				else if (pdt <= 99 && pdt >= 10)
				{
					_putchar((pdt / 10) + '0');
				}
				_putchar((pdt % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
