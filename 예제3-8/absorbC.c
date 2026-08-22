#include <stdio.h>

int main(void)
{
	int income = 0;						// 소득액 초기화
	double tax;							// 세금
	const double tax_rate = 0.12;		// 세율 초기화
	//tax_rate = 0.15;
	income = 190;
	tax = income * tax_rate;
	printf("Varified Tax is %.1lf.\n", tax);

	return 0;
}