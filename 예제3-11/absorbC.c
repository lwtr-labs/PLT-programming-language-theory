#include <stdio.h>

int main() {
	char grade;			//학점을 입력할 변수
	char name[20];		// 이름을 입력할 배열

	printf("Enter your grade: ");
	scanf("%c", &grade);// grade 변수에 학점 문자 입력
	printf("Enter your name: ");
	scanf("%s", name);
	printf("The grade of %s is %c\n", name, grade);

	return 0;

}