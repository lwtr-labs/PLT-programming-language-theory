#include <stdio.h>

int main()
{
	int a = 0, b = 0;

	if (a > 0)
	{
		b = 1;			// 1. 조건식1 : a가 0보다 크면 b에 1 대입
	}
	else if (a == 0)
	{
		b = 2;			// 2. 조건식2 : a가 0이면 b에 2 대입
	}
	else
	{
		b = 3;			// 3. 조건식3 : a가 0보다 작으면 b에 3 대입
	}

	printf("b: %d\n", b);

	return 0;
}