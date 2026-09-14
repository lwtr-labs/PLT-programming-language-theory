#include <stdio.h>

int main() {
	int a, b;
	int sum, sub, mul, inv;

	a = 10;				// 대입 연산(=)
	b = 20;				// 대입 연산(=)
	sum = a + b;		// 더하기 연산(+) 후 대입 연산(=)
	sub = a - b;		// 빼기 연산(-) 후 대입 연산(=)
	mul = a * b;		// 곱하기 연산(*) 후 대입 연산(=)
	inv = -a;			// 음수 연산(-) 후 대입 연산(=)

	printf("Value of a: %d, Value of b: %d\n", a, b);
	printf("Sum: %d\n", sum);
	printf("Sub: %d\n", sub);
	printf("Mul: %d\n", mul);
	printf("Inv: %d\n", inv);

	return 0;
}