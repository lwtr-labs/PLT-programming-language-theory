#include <stdio.h>

int main() {
	int a = 30;
	int res;

	res = (a > 10) && (a < 20);					// 좌항과 우항이 모두 참이면 참
	printf("(a > 10) && (a < 20): %d\n", res);
	res = (a < 10) || (a < 20);					// 좌항과 우항 중 하나라도 참이면 참
	printf("(a < 10) || (a < 20): %d\n", res);
	res = !(a >= 30);							// 수식이 참일 때 거짓, 거짓일 때 참
	printf("! (a >= 30): %d\n", res);

	return 0;
}