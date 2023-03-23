#include "main.h"

/**
* print_line - display line
* @n: number of time for a line
*
* Return: no value
*/
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
