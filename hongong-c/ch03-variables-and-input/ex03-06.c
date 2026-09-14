#include <stdio.h>

int main() {
	char fruit[20] = "strawberry";					// chaar 배열 선언과 문자열 초기화

	printf("[Ddal-gi]: %s\n", fruit);				// 배열명으로 저장된 문자열을 출력
	printf("[Ddal-gi-jem]: %s %s\n", fruit, "jam");	// 문자열 상수를 직접 %s로 출력

	return 0;
}