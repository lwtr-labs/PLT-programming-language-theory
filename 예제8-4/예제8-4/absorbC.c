#include <stdio.h>

int main(void)
{
	char str[80] = "applejam";				// 문자열 초기화

	printf("Intial String : %s\n", str);	// 초기화 문자열 출력
	printf("Enter the string : ");
	scanf("%s", str);						// 새로운 문자열 입력
	printf("String After enter the string : %s\n", str);	// 입력된 문자열 출력

	return 0;
}