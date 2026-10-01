#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile          // 신상명세 구조체 선언
{
    char name[20];      // 이름을 저장할 배열 멤버
    int age;            // 나이
    double height;      // 키
    char *intro;        // 자기소개를 위한 포인터
};

int main(void)
{
    struct profile james;                           // profile 구조체 변수 선언

    strcpy(james.name, "제임스");                   // name 배열 멤버에 이름을 복사
    james.age = 67;                                 // age 멤버에 나이를 저장
    james.height = 185.25;                          // height 멤버에 키 저장

    james.intro = (char *)malloc(80);               // 자기소개를 저장할 공간 동적 할당
    printf("자기소개 : ");
    fgets(james.intro, 80, stdin);                              // 할당한 공간에 자기소개 입력

    printf("name: %s\n", james.name);               // 각 멤버의 데이터 출력
    printf("age: %d\n", james.age);
    printf("height: %.1lf\n", james.height);
    printf("intro: %s\n", james.intro);
    free(james.intro);  // 동적 할당 영역 반환

    return 0;
}