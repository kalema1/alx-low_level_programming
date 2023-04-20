#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - print strings
* @separator: string between strings
* @n: number of strings
*
* Return: no value
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *c;
	va_list l;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(l, char *);
		if (c != NULL)
			printf("%s", c);
		else
			printf("(nil)");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(l);
	printf("\n");
}
