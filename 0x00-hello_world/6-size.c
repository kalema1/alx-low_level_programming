#include <stdio.h>

/**
 * main - prints value of variable types
 *
 * Return: value 0 will be returned
 */
int main(void)
{
	int i;
	long int I;
	long long int L;
	char c;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(I));
	printf("Size of long long int: %zu byte(s)\n", sizeof(L));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
