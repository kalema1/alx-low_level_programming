#include "main.h"

/**
* print_chessboard - prints chessboard
* @a: chesboard type
*
* Return: no value
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if ((i == 0 && j == 7) || (i == 2 && j == 7) ||
			(i == 3 && j == 7) || (i == 4 && j == 7) ||
			(i == 5 && j == 7) || (i == 6 && j == 7))
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
