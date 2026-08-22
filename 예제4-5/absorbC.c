#include <stdio.h>

int main() {
	int a = 10, b = 20, c = 10;
	printf("a: %d, b: %d, c: %d\n", a, b, c);
	int res;				// 결과값을 저장할 변수
							// 각 a와 b, c 값을 대입해보자.
	res = (a > b);			// 10 > 20은 거짓이므로 결과값은 0
	printf("a > b: %d\n", res);
	res = (a >= b);			// 10 >= 20은 거짓이므로 결과값은 0
	printf("a >= b: %d\n", res);
	res = (a < b);			// 10 < 20은 참이므로 결과값은 1
	printf("a < b: %d\n", res);
	res = (a <= b);			// 10 <= 20은 참이므로 결과값은 1
	printf("a <= c: %d\n", res);
	res = (a <= c);			// 10 <= 10은 참이므로 결과값은 1
	printf("a <= c: %d\n", res);
	res = (a == b);			// 10 == 20은 거짓이므로 결과값은 0
	printf("a == b: %d\n", res);
	res = (a != c);			// 10 != 10은 거짓이므로 결과값은 0
	printf("a != c: %d\n", res);

	return 0;

}