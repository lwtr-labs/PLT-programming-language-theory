#include <stdio.h>

int main()
{
	int a;			// int형 변수 a 선언
	int b, c;		// 2개의 int형 변수 b, c를 동시에 선언
	double da;		// double형 변수 da 선언
	char ch;		// char형 변수 ch 선언

	a = 10;			// int형 변수 a에 정수 10 대입
	b = a;			// int형 변수 b에 변수 a의 값 대입
	c = a + 20;		// int형 변수 c에 변수 a의 값과 정수 20을 더한 값 대입
	da = 3.5;		// double형 변수 da에 실수 3.5 대입
	ch = 'A';		// char형 변수 ch에 문자 'A' 대입

	printf("Vlaue of a: %d\n", a);
	printf("Value of b: %d\n", b);
	printf("Value of c: %d\n", c);
	printf("Value of da: %.1f\n", da);
	printf("Value of ch: %c\n", ch);

	return 0;
}