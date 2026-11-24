#include <stdio.h>

int main(void) {
    double a[3] = { 1.1, 2.2, 3.3 };
    char *pc = (char *)a;   // 동일한 시각 주소로 형 변환 
    int *pi = (int *)a;     // 동일한 시작 주소로 형 변환
    double *pd = a;

    // 증가량을 10진로 확인하기 위해 %llu(unsigned long long) 출력
    // long long => 8바이트 = 64비트 <- (운영체제 비트 수)
    printf("char 포인터\n");
    printf("pc = %llu\npc+1 = %llu\npc+2 = %llu\n\n", pc, pc+1, pc+2);
    
    printf("int 포인터\n");
    printf("pi = %llu\npi+1 = %llu\npi+2 = %llu\n\n", pi, pi+1, pi+2);

    printf("double 포인터\n");
    printf("pd = %llu\npd+1 = %llu\npd+2 = %llu\n\n", pd, pd+1, pd+2);

    return 0;
}

/*
char 포인터
pc = 817266423456
pc+1 = 817266423457
pc+2 = 817266423458
-> 1씩 증가

int 포인터
pi = 817266423456
pi+1 = 817266423460
pi+2 = 817266423464
-> 4씩 증가

double 포인터
pd = 817266423456
pd+1 = 817266423464
pd+2 = 817266423472
->ㅋ8씩 증가
*/