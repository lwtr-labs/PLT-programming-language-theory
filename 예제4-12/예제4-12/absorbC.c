#include <stdio.h>

int main()
{
	int a = 10, b = 20, res;

	// res = (a > b) ? a : b;	// a와 b 중에 큰 값이 res에 저장
	// 또는 
	(a > b) ? (res = a) : (res = b); // 하지만 이 방법은 res = 를 중복해 사용하므로 바람직한 사용법은 아니다.
									 // res1 =, res2 = 처럼 반영할 변수가 다르면 유용
	
	printf("Max value: %d\n", res);

	return 0;

}