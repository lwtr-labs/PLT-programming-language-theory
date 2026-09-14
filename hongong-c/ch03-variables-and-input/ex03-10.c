#include <stdio.h>

int main() {
	int age;	// 나이는 정수형
	double height;	// 키는 실수형

	printf("Enter age and height: "); // 입력 안내 메시지 출력
	scanf("%d%lf", &age, &height);	// 나이와 키를 함께 입력
	printf("Age: %d, Height: %.1fcm\n", age, height);	// 입력값 출력

	return 0;
}