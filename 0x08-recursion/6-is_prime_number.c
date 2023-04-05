#include "main.h"

/**
* is_prime_number - check prime number
* @n: number
*
* Return: value 1  on success
*/
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
*check_prime - check all numbers
*@n: numbers
*@resp: test value
*
* Return: value 1
*/
int check_prime(int n, int resp)
{
	if (resp >= n && n > 1)
		return (1);
	else if (n % resp == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, resp + 1));
}
