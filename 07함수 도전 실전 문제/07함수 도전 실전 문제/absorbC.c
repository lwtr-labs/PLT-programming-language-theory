#include <stdio.h>

int rec_func(int n);	// 1부터 n까지 반환하는 함수

int main(void)
{
	int result;

	result = rec_func(10); // == 10 + rec_func(9) => 10 + 9 + . . . + 2 + rec_func(1) = sigma(1 to 10)

	printf("Rec_func: %d\n", result);

	int sumation = 0, i;

	for (i = 1; i < 11; i++)
	{
		sumation += i;
	}

	printf("For sumation: %d", sumation);

	return 0;
}

int rec_func(int n)
{
	if (n >= 2)
	{
		return (n + rec_func(n - 1));
	}
	else
	{
		return n;
	}
}