#include "main.h"

/**
* _puts - print string of characters
* @str: string
*
* return: value nothing
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
