#include "main.h"

/**
* print_last_digit - give last digit
* @n: number from which last digit is
*
* Return: value 0
*/
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	else
	{
		_putchar(ld + 48);
		return (ld);
	}
}
