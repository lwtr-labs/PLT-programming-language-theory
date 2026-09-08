#include <stdio.h>

void swap(double* pa, double* pb);	// 두 실수를 바꾸는 함수
void line_up(double* maxp, double* midp, double* minp);	// 함수 선언

int main(void)
{
	double max, mid, min;

	printf("실수값 3개 입력 : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);	// 세 변수의 값을 정렬하는 함수 호출
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}


void line_up(double* maxp, double* midp, double* minp)
{
	int i, count = 1;	// i는 반복문 변수, count는 정렬 횟수 (조건 실행을 위해 count를 0이 아닌 1로 지정)
	double *ary[3] = { maxp, midp, minp };	// 세 포인터 변수를 담을 포인트 배열

	while (count != 0)	// 한 루프에서 정렬 횟수가 0이 될 때 까지
	{
		count = 0;		// count를 으로 초기화

		for (i = 0; i < 2; i++)	// 버블 정렬
		{
			if (*ary[i] < *ary[i + 1])	// 만약 앞 배열의 요소가 현재 배열보다 크다면
			{
				swap(ary[i], ary[i + 1]);	// 두 포인터가 가리키는 변수의 값을 바꿔라
				count += 1;		// 정렬 회수 + 1
			}
		}

		if (count == 0)	// 정렬 회수가 0이면 정지
		{
			break;
		}
	}
}