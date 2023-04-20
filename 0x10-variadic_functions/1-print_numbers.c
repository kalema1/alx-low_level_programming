#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - print numbers
* @separator: string between numbers
* @n: numbers of integers
*
* Return: value 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(l, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(l);
	printf("\n");
}
