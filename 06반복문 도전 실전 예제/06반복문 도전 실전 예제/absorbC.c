#include <stdio.h>

int main()
{
	int ioNum, i, j, count = 0, IsPrime;

	printf("Enter the number upper than 1: ");
	scanf("%d", &ioNum);

	for (i = 2; i < ioNum + 1; i++)
	{
		IsPrime = 1;
		for (j = 2; j < i - 1; j++)
		{
			if (i % j == 0)
			{
				IsPrime = 0;
				break;
			}
		}
		if (IsPrime == 1)
		{
			printf("%5d", i);
			count += 1;
			if (count % 5 == 0)
			{
				printf("\n");
			}
		}
	}

	return 0;
}