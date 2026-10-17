#include <stdio.h>

int main(void) {
    printf("\"2025 국내 주요 IT 기업 정보 비교\"\n\n");     // \" : 큰따옴표 출력

    printf("COMPANY\tSTART PAY\tYEARS\tEMPLOYEES\n");       // 탭(\t) 헤더
    printf("%-18s %10s %8s %10s\n",
            "COMPANY", "START PAY", "YEARS", "EMPLOYEES");  // 필드 폭 헤더
    printf("-------------------------------------------------\n");

    // 회사명은 왼쪽 정렬, 숫자는 오른쪽 정렬
    printf("%-18s %10d %8.1f %10d\n", "LG CNS", 5500, 12.9, 6937);
    printf("%-18s %10d %8.1f %10d\n", "Hyundai AutoEver", 5029, 6.9, 6444);
    printf("%-18s %10d %8.1f %10d\n", "NAVER", 4486, 7.7, 5126);
    printf("%-18s %10d %8.1f %10d\n", "NC", 3890, 7.5, 4504);
    printf("%-18s %10d %8.1f %10d\n", "SK Telecom", 3400, 13.7, 5262);

    printf("\n저장 위치: C:\\data\\company.txt\n"); // \\ : 역슬래시 출력
    printf("자료 신뢰도: 95%%\n");                  // %% : % 문자 출력
    printf("출력이 완료되었습니다.\a\n");           // \a : 경고음
    
    return 0;
}