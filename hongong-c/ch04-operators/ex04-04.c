#include <stdio.h>

int main() {
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;	// 전위형 증감 연산자
	post = (b++) * 3;	// 후위형 증감 연산자

	printf("Initial value of a: %d, of b: %d\n", a, b);
	printf("++a: %d, b++: %d\n", pre, post);

	return 0;

}