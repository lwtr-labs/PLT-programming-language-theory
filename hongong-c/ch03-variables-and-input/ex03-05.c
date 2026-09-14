#include <stdio.h>

int main()
{
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;			// 유효 숫자가 많은 값으로 초기화

	printf("value of float type variable: %.20f\n", ft);	// 소수점 이하 20자리까지 출력
	printf("value of double type variable: %.20lf\n", db);

	return 0;
}