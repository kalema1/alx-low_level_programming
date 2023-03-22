#include "main.h"

/**
* times_table - display 9 table
*
* Return: no value
*/
void times_table(void)
{
	int a, b, pdt;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			pdt = a * b;
			if (b == 0)
			{
				_putchar('0');
			}
			else if (pdt < 10)
			{
				_putchar(' ');
				_putchar(pdt + '0');
			}
			else
			{
				_putchar(pdt / 10 + '0');
				_putchar(pdt % 10 + '0');
			}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
