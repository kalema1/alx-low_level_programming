#include <stdarg.h>
#include <stdio.h>

/**
* sum_them_all - sums all the parameters
* @n: constant value
*
* Return: value 0
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list p;

	if (n == 0)
		return (0);
	va_start(p, n);

	for (i = 0; i < n; i++)
		sum += va_arg(p, int);

	va_end(p);
	return (sum);
}
