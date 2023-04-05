#include "main.h"

/**
* _sqrt_recursion - return square root
* @n: number
*
* Return: square root
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
* _sqrt - calculates natura square root
* @n: number
* @i:
*
* Return: square root
*/
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
