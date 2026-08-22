#include <stdio.h>

int main() {
	short sh = 32767;						// short형의 최댓값 초기화
	int in = 2147483647;					// int형의 최댓값 초기화
	long ln = 2147483647;					// long형의 최대값 초기화
	long long lln = 123451234512345;		// 아주 큰 값 초기화

	printf("printf short type variable: %d\n", sh);
	printf("printf int type variable: %d\n", in);
	printf("printf long type variable: %ld\n", ln);
	printf("printf long long type varialbe: %lld\n", lln);	// long long 형은 lld로 출력

	printf("Size of long long type: %dbyte\n", sizeof(long long));	// 14행에 추가

	return 0;
}