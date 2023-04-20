#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
* print_int - print integer
* @l: list
*
* Return: no value
*/
void print_int(va_list l)
{
	printf("%d", va_arg(l, int));
}
/**
* print_float - print float
* @l: list
*
* Return: no value
*/
void print_float(va_list l)
{
	printf("%f", va_arg(l, double));
}
/**
* print_char - print char
* @l: list
*
* Return: no value
*/
void print_char(va_list l)
{
	printf("%c", va_arg(l, int));
}
/**
* print_str - print string
* @l: list
*
* Return: no value
*/
void print_str(va_list l)
{
	char *s = va_arg(l, char *);

	if (s == NULL)
		printf("(nil)");
	printf("%s", s);
}
/**
* print_all - print all
* @format: list type
*
* Return: no value
*/
void print_all(const char * const format, ...)
{
	va_list l;
	int i = 0, j = 0;
	char *sep = "";

	printTypeStruct printType[] = {
		{ "i", print_int },
		{ "f", print_float },
		{ "c", print_char },
		{ "s", print_str },
		{NULL, NULL}
	};
	va_start(l, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*printType[j].type == format[i])
			{
				printf("%s", sep);
				printType[j].printer(l);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(l);
}
