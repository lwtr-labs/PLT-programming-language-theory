#include <stdio.h>

int main() {
	int a = 10, b = 20, res;

	a + b;									// 연산 결과는 저장되지 않았으므로 버려짐
	printf("%d + %d = %d\n", a, b, a + b);	// 연산 결과를 바로 출력에 사용

	res = a + b;							// 연산 결과를 변수에 저장
	printf("%d + %d = %d", a, b, res);		// 저장된 값을 계속 사용

	return 0;
}