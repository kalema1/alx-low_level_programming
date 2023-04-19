#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* op_add - addition of 2 numbers
* @a: number 1
* @b: number 2
*
* Return: value
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - subtraction of 2 numbers
* @a: number 1
* @b: number 2
*
* Return: value
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - multplication of 2 numbers
* @a: number 1
* @b: number 2
*
* Return: value
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - division of 2 numbers
* @a: number 1
* @b: number 2
*
* Return: value
*/
int op_div(int a, int b)
{
	if (b)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
* op_mod - modulo of 2 numbers
* @a: number 1
* @b: number 2
*
* Return: value
*/
int op_mod(int a, int b)
{
	if (b)
		return (a % b);
	printf("Error\n");
	exit(100);
}
