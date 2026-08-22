#include <stdio.h>

int main()
{
	int a = 10;
	double b = 3.4;

	printf("Size of int a: %d\n", sizeof(a));
	printf("Size of double b: %d\n", sizeof(b));
	printf("Size of int const: %d\n", sizeof(10));
	printf("Size of expression: %d\n", sizeof(1.5 + 3.4));
	printf("Size of expression: %d\n", sizeof 1.5 + 3.4);
	printf("Size of Char type: %d\n", sizeof(char));

	return 0;
}