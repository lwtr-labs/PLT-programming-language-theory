#include <stdio.h>

int main()
{
	int i;							// 반복 횟수를 세기 위한 제어 변수
	int sum = 0;					// 1부터 10까지의 합을 누적할 변수

	for (i = 1; i <= 10; i++)		// i는 1부터 10까지 증가하면서 10번 반복
	{
		sum += i;					// i 값을 sum에 누적
		if (sum > 30) break;		// 누적한 값이 30보다 크면 반복문을 끝낸다.
	}
	printf("Sum: %d\n", sum);
	printf("Last Added Number: %d", i);

	return 0;
}