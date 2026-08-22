#include <stdio.h>

int main()
{
	int a = 10, b = 20;					// 차례대로 연산이 수행되며, 결과적으로
	int res;							// res에 저장되는 값은 증가된 b의 값이다.

	res = (++a, ++b);

	printf("a: %d, b: %d\n", a, b);
	printf("res: %d\n", res);

	return 0;
}