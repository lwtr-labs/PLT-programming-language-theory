#include <stdio.h>

int main()
{
	int a = 20, b = 10;

	if (a > 10)				// a가 10보다 크면 아래 실행문을 실행, 아니면 18행으로
	{
		if (b >= 0)			// b가 0 이상이면, b에 1 대입, 그리고 18행으로
		{
			b = 1;
		}
		else
		{
			b = -1;			// b가 0보다 작으면 b에 -1을 대입, 그리고 18행으로
		}
	}

	printf("a: %d, b: %d", a, b);

}