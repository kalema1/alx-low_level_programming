#include "function_pointers.h"

/**
* print_name - print name
* @name: name
* @f: pointer to a function
*
* Return: no value
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
