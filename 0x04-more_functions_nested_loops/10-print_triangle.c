#include "main.h"

/**
* print_triangle - display triangle
* @size: size of the triangle
*
* Return: no value
*/
void print_triangle(int size)
{
	int row, space, symbol;

	for (row = 1; row <= size; row++)
	{
		for (space = 1; (space <= (size - row)); space++)
		{
			_putchar(' ');
		}
		for (symbol = 1; symbol <= row; symbol++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
