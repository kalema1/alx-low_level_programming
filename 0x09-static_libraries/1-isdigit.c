#include "main.h"

/**
* _isdigit - check if digit
* @c: value to be checked
*
* Return: value 1
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
